/*
 * Lab1Source.cpp
 *
 *  Created on: Aug 29, 2019
 *     Authors: Ben Segal & Prosper Anyidoho
 *_____  _                                   _
 |  __ \| |                                 | |
 | |__) | | ___  __ _ ___  ___   _ __   ___ | |_ ___
 |  ___/| |/ _ \/ _` / __|/ _ \ | '_ \ / _ \| __/ _ \
 | |    | |  __/ (_| \__ \  __/ | | | | (_) | ||  __/
 |_|    |_|\___|\__,_|___/\___| |_| |_|\___/ \__\___|
 * includes, forward decelerations and defines are contained
 * in Lab1Source.h
 */
#include "Lab1Source.h"//Inlcudes forward decs, external includes and defines

int main(){
	cout << "Hello World!" << endl;

	//Problem 3
	printStar();
	if(isPrime(7))
		cout << 7 <<": prime" << endl;
	else
		cout << 7 << ": not prime" << endl;

	if(isPrime(8))
		cout << 8 <<": prime" << endl;
	else
		cout << 8 << ": not prime" << endl;

	if(isPrime(41))
		cout << 41 <<": prime" << endl;
	else
		cout << 41 << ": not prime" << endl;

	//Problem 4
	printStar();
	cout << sumEveryTwenty() << endl;

	//Problem 5
	printStar();
	cout<< howMany() << endl;

	//Problem 7
	printStar();
	mult12();

	//Problem 8
	printStar();
	cout<< collatz() <<endl;

	//Problem 9
	printStar();
	leapYear();

	//Problem 10
	printStar();
	xs(5);
	xs(4);
	xs(10);

	//Problem 11
	printStar();
	collatzRange(1,7);
	return 0;
}

/*collatzRange (problem 11)
 * INPUTS: int
 * 		num1: starting number in test range
 * 		num2: end number in test range
 * OUTPUTS:
 * DECRIPTION:
 * 		This function tests the collatz conjecture for a range of numbers
 *
 */
void collatzRange(int num1,int num2){
	for(int i=num1;i<=num2;i++){
		cout<<"Testing: "<<i<<endl;
		while(num1!=1){
			if(num1%2==0)
				num1=num1/2;
			else
				num1=3*num1+1;
		}
	    cout<<"Collatz Conjecture is still working"<<endl;

	}

}

/*xs (problem 10)
 * INPUTS: int
 * 		num: the size of the x to be printed
 * OUTPUTS:
 * DECRIPTION:
 * 		This function prints a large X made out of *'s. The size is determined
 * 		by the input and is rounded to the largest odd number even thought it
 * 		would totally work with a even number.
 */
void xs(int num){
	if(num%2==0)
		num++;

	int count = num * 2 - 1;
	for(int i = 1; i <= count; i++){
		for(int j = 1; j <= count; j++){
			if(i == j || (j == count -i +1))
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
/* leapYear (problem 9)
 * INPUTS:
 * OUPTUTS:
 * DECRIPTION:
 * 		This function prints out every leap year from 2017 - 2417
 */
void leapYear(){
	int year = 2017;
	for(int i = year; i <= year + 400; i++){
		if(i % 50 == 0)
			cout<<endl;

		if(i % 4 == 0){
			if(i % 100 == 0){
				if(i % 400 == 0)
					cout << i << "\t";
				else
					continue;
			}
			else
				cout << i << "\t";
		}

	}
	cout<<endl;
}
/*collatz (problem 8)
 * INPUTS:
 * OUTPUTS: int
 * 		The number of steps of the Collatz conjecture from a user inputed start
 * DECRIPTION:
 * 		This function takes numerical input from the user (keyboard) and preforms the
 * 		Collatz conjecture on that number and returns how many steps it took
 */
int collatz(){
	//Input sanitazation
	int in = 1;
	do{
		cout<<"Enter a positive non zero number : ";
		cin >> in;
		if(in <=0)
			cout <<"\nTry again!" << endl;
	}while(in <= 0);

	//Collatz logic
	int count = 0;
	while(in != 1){
		if(in % 2)
			in = in * 3 +1;
		else
			in = in / 2;
		count ++;
	}
	return count;
}

/*mult12 (problem 7)
 * INPUTS:
 * OUTPUTS:
 * DECRIPTION:
 * 		This function displays 12 multiplication tables for 1-12
 */
void mult12(){
	for(int i = 1; i <= 12; i++)
		mult(i);
}
/*mult (problem 6)
 * INPUTS: int
 * 		num: the number who's multiplication table is to be displayed
 * OUPTUTS:
 * DECRIPTION:
 * 		This function will display the multiplication table, up to 12
 * 		for a desired number.
 */
void mult(int num){
	for(int i = 1; i <= 12; i++)
		cout << num * i <<"\t";
	cout<<"\n";
}

/*howMany (problem 5)
 * INPUTS:
 * OUTPUTS: int
 * 		How many terms required for an enumeration to 1000000
 * DECRIPTION:
 * 		This function determines how many incremental terms summed needed
 * 		to reach 1000000
 */
int howMany(){
	int i = 0, count = 0;
	while(count <= 100000)
		count += i++;
	return i;
}
/*sumEveryTwenty (problem 4)
 * INPUTS:
 * OUTPUTS: int
 * 		The sum of the series 1 + 2 +...+ 300
 * DECRIPTION:
 * 		This function sums the series 1 + 2 +...+ 300 and prints out every
 * 		20th term
 */
int sumEveryTwenty(){
	int total = 0;
	for(int i = 1; i <= 300; i++){
		total += i;
		if(!(i % 20))
			cout << total << endl;
	}
	return total;
}

/*isPrime (problem 3)
 * INPUTS: int
 * 		num: the integer to be checked
 * OUTPUTS: bool
 * 		true: if num is prime
 * 		false: if num is not prime
 * DECRIOTION:
 * 		This function determines if an integer is prime or not
 */
bool isPrime(int num){

	int dev = num - 1;
	while(dev > 1)
		if(num % dev-- == 0)
			return false;
	return true;
}

/*printStar (problem 2)
 * INPUTS:
 * OUTUPTS:
 * DECRIPTION:
 * 		Prints a line of stars to cout
 */
void printStar(){
	cout << stars <<endl;
}



