/*
 * SLL.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: ben
 */
#include "SLL.hpp"

SLL::SLL(){
	first = NULL;
	last = NULL;
	size = 0;
}

SLL::~SLL(){
	SNode *tmp;
	for(tmp = first; tmp != NULL; tmp = tmp->next){
		first = tmp;
		delete first;
	}
	cout<<"deleted each node in ll"<<endl;
}

void SLL::insertInOrder(int r, string c){
	if(size == 0)
		addFirst(r,c);
	else if(r < first->rating)
		addAtFront(r,c);
	else if(r > last->rating)
		push(r,c);
	else{
		SNode *n = new SNode(r,c), *tmp;
		for(tmp = first; r > tmp->next->rating; tmp = tmp->next);
		n->next = tmp->next;
		tmp->next =n;
	}
}

void SLL::printSLL(){
	SNode *tmp;
	for(tmp = first; tmp != NULL; tmp = tmp->next)
		tmp->printNode();
}

void SLL::addFirst(int r, string c){
	first = new SNode(r,c);
	last = first;
	size = 1;
}

void SLL::push(int r, string c){
	SNode *tmp = new SNode(r,c);
	last->next = tmp;
	last = tmp;
	size++;
}

void SLL::addAtFront(int r, string c){
	SNode *tmp = new SNode(r,c);
	tmp->next = first;
	first = tmp;
	size++;
}

int SLL::pop(){
	int out = last->rating;
	SNode *tmp;
	for(tmp = first; tmp->next != last; tmp = tmp->next);
	delete last;
	last = tmp;
	last->next = NULL;
	return out;
}

double SLL::getAve(){
	double out = 0;
	SNode *tmp;
	for(tmp = first; tmp != NULL; tmp = tmp->next)
		out += tmp->rating;
	return out/(double)size;
}

int SLL::getSize(){
	return size;
}
