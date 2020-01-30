/*
 * LL.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: ben
 */
#include "LL.hpp"

LL::LL(){
	first = NULL;
	last = NULL;
	size = 0;
	score = 0;
}

void LL::push(string w){
	SNode *n = new SNode(0,w);
	if(last != NULL)
		last->next = n;
	else
		first = n;
	last = n;
	size++;
}

void LL::addFirst(string w){
	SNode *n = new SNode(0,w);
	n->next = first;
	first = n;
}

void LL::printList(){
	SNode *n;
	for(n = first; n != NULL; n = n->next)
		cout<<n->wScore << " , ";
	cout<<endl;
}

void LL::getScore(){
	SNode *n;
	int s = 0;
	for(n = first; n != NULL; n = n->next)
		s += n->wScore;
	score = s;
}
