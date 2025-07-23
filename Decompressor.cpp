#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

int main(int argc, char* argv[]) {
	if (argc != 3) {
		std::cerr << "Include an input file name and an output file name.";
		return 1;
	}
	// get the file to decompress
	std::ifstream file(argv[2], std::ios::binary);
	if (!file) {
		std::cerr << "Unable to read the file.";
		return 1;
	}

	std::unordered_map<std::string, char> huffmanCodes = std::unordered_map<std::string, char>();
	// loop through the unordered map at the top until blank line.
	std::string line;
	bool isBlank = false;
	while (std::getline(file, line) && (line.size() != 1 || line == "0" || line == "1")) {
		if (line == "") {
			isBlank = true;
		}
		else if (isBlank) {
			huffmanCodes[line] = '\n';
			isBlank = false;
		}
		else {
			huffmanCodes[line.substr(1)] = line.at(0);
		}
	}

	// loop through the rest of the file decoding every code and adding it to the new file
	std::ofstream oStream(argv[1]);
	char current, next;
	std::string path("");
	if (file.get(current)) {
		while (file.get(next)) {
			// for every bit in the byte char
			for (int i = 0; i < 8; i++) {
				//add the most signifigant bit into the path
				path += std::to_string((current & 0x80) != 0);
				current <<= 1;
				//check if the next path exitst ? add : repeat
				if (huffmanCodes.find(path) != huffmanCodes.end()) {
					oStream << huffmanCodes[path];
					path = ""; 
				}
			}
			current = next;
		}
		//handle the last char which may not hold 8 bits of data
		int lastBits = std::stoi(line);
		for (int i = 0; i < lastBits - 1; i++) {
			path += std::to_string((current & 0x80) != 0);
			current <<= 1;
			//check if the current path exitst ? add : repeat
			if (huffmanCodes.find(path) != huffmanCodes.end()) {
				oStream << huffmanCodes[path];
				path = "";
			}
		}
	}

	return 0;
}