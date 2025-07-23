#include "HuffmanNode.hpp"

HuffmanNode::HuffmanNode(char character, int count, HuffmanNode* left, HuffmanNode* right) {
	this->character = character;
	this->count = count;
	this->left = left;
	this->right = right;
}

bool Compare::operator()(const HuffmanNode* left, const HuffmanNode* right) {
	return left->count > right->count;
}