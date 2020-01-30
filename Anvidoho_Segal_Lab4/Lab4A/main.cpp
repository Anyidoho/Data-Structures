/*
 * main.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: ben
 */
#include "book.hpp"

void findBest(book *lib, int size);

int main(){
	int r[7][10] = {{4,4,4,4,4,5,5,4,5,5},
					{5,4,4,4,4,5,5,4,5,5},
					{5,4,5,4,4,5,5,4,5,5},
					{5,5,5,4,4,5,5,4,5,5},
					{5,5,5,5,4,5,5,4,5,5},
					{5,5,5,5,5,5,5,4,5,5},
					{5,5,5,5,5,5,5,5,5,5}};

	book hp[7] = {book("JK", "Rowling", "Harry Potter & The Philosopher's Stone", 1997, r[0]),
				  book("JK", "Rowling", "Harry Potter & The Chamber of Secrets", 1998, r[1]),
				  book("JK", "Rowling", "Harry Potter & The Prisoner of Azkaban", 1999, r[2]),
				  book("JK", "Rowling", "Harry Potter & The Goblet of Fire", 2000, r[3]),
				  book("JK", "Rowling", "Harry Potter & The Order of the Phoenix", 2003, r[4]),
				  book("JK", "Rowling", "Harry Potter & The Half-Blood Prince", 2005, r[5]),
				  book("JK", "Rowling", "Harry Potter & The Deathly Hallows", 2007, r[6])};
	findBest(hp,7);

	book *kat = new book("John", "Green", "An Abundance of Katherines", 2006, r[1]);
	kat->pntBook();
	delete kat;

	book *lib[2];
	lib[0] = new book("Harper", "Lee", "To Kill a Mockingbird", 1960, r[0]);
	lib[1] = new book("Harper", "Lee", "Go Set a Watchman", 2015, r[1]);

	lib[0]->pntBook();
	lib[1]->pntBook();
	for(int i = 0; i < 2; i++)
		delete lib[i];

	return 1;
}


void findBest(book *lib, int size){
	book tmp = lib[0];
	for(int i = 1; i < size; i++)
		if(lib[i]>tmp)
			tmp = lib[i];
	tmp.pntBook();
}
