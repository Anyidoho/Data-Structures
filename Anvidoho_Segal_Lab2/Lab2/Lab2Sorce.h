/*
 * Lab2Sorce.h
 *
 *  Created on: Sep 10, 2019
 *      Author: ben
 */

#ifndef LAB2SORCE_H_
#define LAB2SORCE_H_

#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

#define WINSIZE 5

void func_1(); //Problem 1
void func_2(int x); //Problem 2
int func_3(); //Problem 3
void func_4(int *m); //Problem 4
void func_5(int &k); //Problem 5
void func_6(int *c,int *d); //Problem 6
void func_7(char a1, char *a2, char &a3); //Problem 7
bool func_8a(int &num1,int &num2); //Problem 8a
void randArr(int &len, int &small);
void revArr(int len);
void sucSort(int len, int ran);
//int *stack();
void printArr(int a[], int size);
int *genRanArr(int *size, int *max, int *min);
//int *genRanArrBroke(int size);
void func8(int arr[],int size);
void func9(double arr1[],int size1);
int* func10(int arr[], int *size);
int winAvg(int a[], int size);
int *hannWin(int a[], int size);
void graphArr(int arr[], int len, int max, int min);
int ** twoDArr(int *x, int *y);
void pbmNum(int num, char let);


#endif /* LAB2SORCE_H_ */
