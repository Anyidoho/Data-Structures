/*
 * book.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: ben
 */
#include "book.hpp"

book::book(string afname, string alname, string atitle, int ayear){
	fname = afname;
	lname = alname;
	title = atitle;
	year = ayear;
	for(int i = 0; i < 10; i++)
		ratings[i] = 0;
}

book::book(string afname, string alname, string atitle, int ayear, int *aratings){
	fname = afname;
		lname = alname;
		title = atitle;
		year = ayear;
		for(int i = 0; i < 10; i++)
			ratings[i] = aratings[i];
}

book::~book(){
	delete ratings;
	cout << "Burning: " << title <<endl;
}

double book::getAvg(){
	double out = 0;
	for(int i = 0; i < 10; i++)
		out += ratings[i];
	return out/10.0;
}

void book::pntRat(){
	if(getAvg() == 0)
		cout << "no ratings yet"<<endl;
	else{
		for(int i = 0; i < 9; i++)
			cout << ratings[i] <<", ";
		cout<<ratings[9]<<endl;
	}
}

void book::pntBook(){
	cout << title <<" by: " << fname <<" "<< lname << " published " << year <<" Average rating: " << getAvg() << endl;
}

bool book::operator>(book b){
	return getAvg() > b.getAvg();
}
