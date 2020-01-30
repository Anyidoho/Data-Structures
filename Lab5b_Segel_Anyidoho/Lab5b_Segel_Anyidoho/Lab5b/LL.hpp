#ifndef LL_HPP_
#define LL_HPP_
#include "SNode.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;
class LL {
public:
	SNode *first;
	SNode *last;
	int size;
	int score;
	LL();
	void push(string w);
	void addFirst(string w);
	void printList();
	void getScore();
};
#endif /* LL_HPP_ */
