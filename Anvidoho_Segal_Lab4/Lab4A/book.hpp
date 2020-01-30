/*
 * book.hpp
 *
 *  Created on: Oct 3, 2019
 *      Author: ben
 */

#ifndef BOOK_HPP_
#define BOOK_HPP_
#include <iostream>
using namespace std;

class book{
	string fname, lname;
	string title;
	int year;
	int *ratings = new int[10];

public:
	book(string afname, string alname, string atitle, int ayear);
	book(string afname, string alname, string atitle, int ayear, int *aratings);
	~book();
	double getAvg();
	void pntRat();
	void pntBook();
	bool operator>(book b);
};


#endif /* BOOK_HPP_ */
