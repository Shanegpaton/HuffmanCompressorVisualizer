//#include <iostream>
//#include <fstream>
//#include <string> 
//#include <unordered_map>
//#include <queue>
//#include "HuffmanNode.hpp"
//
//using tree = std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare>;
//
//void createHuffman(tree& minHeap) {
//	if (minHeap.size() > 1) {
//		// get the next two elements
//		HuffmanNode* left = minHeap.top();
//		minHeap.pop();
//		HuffmanNode* right = minHeap.top();
//		minHeap.pop();
//		// create a new node with the two elements
//		HuffmanNode* newNode = new HuffmanNode('\0', left->count + right->count, left, right);
//		// add the node to the tree
//		minHeap.push(newNode);
//		// recursivly call createhuffman
//		createHuffman(minHeap);
//	}
//}
//
//void huffmanCodes(HuffmanNode* node, std::unordered_map<char, std::string>& codeMap, std::string path = "") {
//	// find all the leafs
//
//	//if the node has left go into it,
//	if (node->left != nullptr) {
//		
//		huffmanCodes(node->left, codeMap, path + std::to_string(0));
//	}
//	// if the node has right go into it
//	if (node->right != nullptr) {
//		huffmanCodes(node->right, codeMap, path + std::to_string(1));
//	}
//	// add the leaf to the map
//	if (node->left == nullptr && node->right == nullptr) {
//		codeMap[node->character] = path;
//	}
//}
