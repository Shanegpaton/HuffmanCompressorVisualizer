#pragma once
struct HuffmanNode
{
	HuffmanNode(char character, int count, HuffmanNode* left = nullptr, HuffmanNode* right = nullptr);
	~HuffmanNode();
	char character;
	int count;
	HuffmanNode* left;
	HuffmanNode* right;
};

struct Compare {
	bool operator()(const HuffmanNode* left, const HuffmanNode* right);
};