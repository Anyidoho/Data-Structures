/*
 * SNode.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: ben
 */

#include "SNode.hpp"

SNode::SNode(){
	rating = 0;
	cout<<"ENTER RATING: ";
	cin >> rating;
	cout<<endl << "ENTER COMMENTS: ";
	cin >> comments;
	cout<<endl;
	next = NULL;
}

SNode::SNode(int r, string c){
	rating = r;
	comments = c;
	next = NULL;
}

void SNode::printNode(){
	cout << "Rating: " << rating << ",";
	cout <<"Comments: " << comments << endl;
}

SNode::~SNode(){
	cout << "deleting "<< rating << ", " << comments << endl;
}
