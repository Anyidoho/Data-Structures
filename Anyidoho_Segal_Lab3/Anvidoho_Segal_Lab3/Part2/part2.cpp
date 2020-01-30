/*
 * part2.cpp
 *
 *  Created on: Sep 17, 2019
 *      Author: ben
 */

#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

class Hanning{
	int winSize;
	int *origArr;
	int arrSize;
	int *filtArr;

public:
	Hanning(int setWinSize, int *setOrigArr, int setArrSize);
	int winAvg(int a[]);
	void hanWin();
	int* getFiltArr();
	void graphArr(bool slect);
	void setWinSize(int setWinSize);
	void printArr(bool slect);
	~Hanning();
};

Hanning::Hanning(int setWinSize, int *setOrigArr, int setArrSize){
	winSize = setWinSize;
	origArr = setOrigArr;
	arrSize = setArrSize;
	filtArr = new int [arrSize];

}

Hanning::~Hanning(){
	cout<<"Engage self destruct"<<endl;
	delete filtArr;
}

int Hanning:: winAvg(int a[]){
	int total = 0, div = 0, weight = 1, half = winSize/2;
	for(int i = 0; i < winSize; i++)
	{
		total += a[i] * weight;
		div+=weight;

		if(i>=half)
			weight--;
		else
			weight++;
	}

	return total/div;
}

int *Hanning::getFiltArr(){
	hanWin();
	return filtArr;
}

void Hanning::hanWin(){
	for(int i = 0; i < arrSize; i ++)
		filtArr[i] = 0;

	for(int i = 0; i <= arrSize - winSize; i ++)
		filtArr[i+(winSize/2)] = winAvg(&origArr[i]);
}

void Hanning::graphArr(bool slect){
	int max = origArr[0], min = max;
	for(int i = 0; i < arrSize; i++){
		if(origArr[i] > max)
			max = origArr[i];
		if(origArr[i] < min)
			min = origArr[i];
	}

	if(slect){
		for(int i = max; i >= min; i--){
			cout<<i<<"|";
			for(int j = 0; j < arrSize; j++){
				if(filtArr[j] == i)
					cout<<"*";
				else
					cout<<" ";
			}
		cout<<endl;
		}
	}
	else{
		for(int i = max; i >= min; i--){
			cout<<i<<"|";
			for(int j = 0; j < arrSize; j++){
				if(origArr[j] == i)
					cout<<"*";
				else
					cout<<" ";
			}
		cout<<endl;
		}
	}
	cout<<"----";
	for(int i = 0; i < arrSize; i++)
		cout<<"-";
	cout<<endl;
}

void Hanning::setWinSize(int setWinSize){
	winSize = setWinSize;
	if(setWinSize%2 == 0)
		winSize = setWinSize - 1;
	hanWin();
}

void Hanning::printArr(bool slect){
	if(slect){
		for(int i = 0; i < arrSize; i++){
		if(i == arrSize-1)
			cout << filtArr[i];
		else
			cout << filtArr[i] << ", ";
		}
	}
	else{
		for(int i = 0; i < arrSize; i++){
		if(i == arrSize-1)
			cout << origArr[i];
		else
			cout << origArr[i] << ", ";
		}
	}
	cout << endl;
}

int main(){
	int arr1[] = {3,8,2,5,1,4,6,0,2};
	Hanning han(5,arr1,9);
	han.hanWin();
	int *arr2 = han.getFiltArr();
	han.printArr(false);
	han.printArr(true);
	han.graphArr(false);
	han.graphArr(true);
	han.setWinSize(3);
	han.printArr(false);
	han.printArr(true);
	han.graphArr(false);
	han.graphArr(true);
}
