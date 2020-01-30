/*
 * part1.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: ben
 */
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

class MathQuiz{
	int num, corr, total;

public:
	MathQuiz(int num){
		this->num = num;
		corr=0;
		total=0;
	}

	void quiz(){
		srand(time(NULL));
		int ran = rand() % 12 +1;

		cout<< "What is " << num <<" times " << ran << "?"<<endl;
		int in;
		cin >> in;

		if(in == num*ran){
			cout << "Correct!"<<endl;
			corr++;
		}
		else
			cout<<"Incorrect!"<<endl;

		total++;
	}

	void getScore(){
		cout<<"You have: " << corr <<"/" << total << endl;
	}
};

int main(){
	MathQuiz math(10);

	for(int i = 0; i < 10; i++){
		math.quiz();
		math.getScore();
	}

	return 0;
}


