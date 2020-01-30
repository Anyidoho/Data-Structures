/*
 * BinHeap.cpp
 *
 *  Created on: Nov 7, 2019
 *      Author: elorm
 */

#include "BinHeap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

BinHeap::BinHeap(string arr[], int len) {
heaplen = 0;
arrlen = len;
heap = new string[arrlen];
for (int i = 0; i < len; i++) {
insertHeap(arr[i]);
}
printHeap();
}
BinHeap::~BinHeap() {
delete [] heap;
}
void BinHeap::printHeap() {
cout << endl;
for (int i = 0; i < arrlen;i++) {
cout << i << ", ";
}
cout << endl;
for (int i = 0; i < heaplen;i++) {
cout << heap[i] << ", ";
}
cout << endl;
}
int BinHeap::findMax(int x, int y) {
if ((x < heaplen) && (y < heaplen)) {
if (heap[x] > heap[y]) {
return(x);
}
else {
return(y);
}
}
else if (x < heaplen) {
return x;
}
else return -1;
}
void BinHeap::insertHeap(string s) {
if (heaplen==0){
heap[0]=s;
heaplen ++;
}
else{
heaplen ++;
heap[heaplen - 1] = s;
bubbleUp(heaplen-1);
 }
}

string BinHeap::deleteHeap() { // returns the string that was deleted
string temp=heap[heaplen-1];
heap[0]=temp;
heaplen--;
bubbleDown(0);
return temp;
}

void BinHeap::bubbleDown(int i) {
bool flag=true;
int l=2*i+1;
int r=2*i+2;
int max=findMax(l,r);
if(max==-1){
flag=false;
}
else{
flag=findMax(i,max)==max;
}
while(flag){
string temp=heap[max];
heap[max]=heap[i];
heap[i]=temp;
i=max;
max=findMax(2*i+1,2*i+2);
   if(max==-1){
   flag=false;
}
   else{
   flag=findMax(i,max)==max;
}

}
}
void BinHeap::bubbleUp(int i) {
int f=i;
int p=(i-1)/2;
bool flag=findMax(f,p)==i;
while(flag){
string temp=heap[i];
heap[i]=heap[(i-1)/2];
heap[(i-1)/2]=temp;
i=((i-1)/2);
   if(i==0){
   flag=false;
}
	else{
	flag=findMax(i,(i-1)/2)==i;

}
}
}


/* Part 2 */
string BinHeap::deleteHeap2() {
string f = heap[0];
heap[0] = heap[heaplen - 1];
heaplen--;
bubbleDown(0);
return f;
}
void BinHeap::deleteAll() {
int f = heaplen;
for(int x = 0; x<heaplen; x++){
	deleteHeap2();
}
heaplen = f;

}



