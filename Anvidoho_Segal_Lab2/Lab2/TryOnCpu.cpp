/*
 * ToC1.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: ben
 */

#include "Toc.h"

void runAllToC(){
	cout << "---------Start Try On Computer section-----------" << endl;
	toc1();
	toc2();
	toc3();
	toc4main();
	toc5main();
	cout << "----------End Try On Computer section------------" << endl;
}

void sep(int n){
	cout << "-----------CoP# "  << n <<"----------------" << endl;
}

void toc1(){
	sep(1);
	int x = 42;
	cout << "Value of x: " << x << " | Address of x: " << &x << " | One cannot"
			" print the name of x without already knowing it" << endl;
}

void toc2(){
	sep(2);
	int x = 42;
	int *p2x = &x;
	cout << "value that pointer points to: " << *p2x << " Address in p2x: " << p2x << endl;
	//											^a							   ^b
	cout << "address in x: " << &x << " Address of p2x: " << &p2x << endl;
	//							^c							 ^d
	x = 0x000855; // <- e | my favorite color
	cout << "new value that pointer points to: " << *p2x << endl; // <-f
	//It changed because I changed the value of x and when dereferencing p2x I get whatever's
	//at x
}

void toc3(){
	sep(3);
	int x = 42;
	int *p2x = &x;
	*p2x = 0xBEEF; //<- a Just some cool hex number
	cout << "new value in x: " << x << endl; //<- b
}

void toc4main(){
	sep(4);
	int a = 2;
	int b = 4;
	cout << a << b<< endl;
	toc4swap(&a,&b);
	cout << a << b<< endl;
}

void toc4swap(int *m, int *n) {
	int tmp = *m;
	*m = *n;
	*n = tmp;
}

void toc5main(){
	sep(5);
	int a = 2;
	int b = 4;
	cout << a << b<< endl;
	toc5swap(a,b);
	cout << a << b<< endl;
}

void toc5swap(int &m, int &n) {
	int tmp = m;
	m = n;
	n = tmp;
}
