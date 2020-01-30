/*
 * Lab1Source.cpp
 *
 *  	   Due: Sep 12, 2019
 *     Authors: Ben Segal & Prosper Anyidoho
 *_____  _                                   _
 |  __ \| |                                 | |
 | |__) | | ___  __ _ ___  ___   _ __   ___ | |_ ___
 |  ___/| |/ _ \/ _` / __|/ _ \ | '_ \ / _ \| __/ _ \
 | |    | |  __/ (_| \__ \  __/ | | | | (_) | ||  __/
 |_|    |_|\___|\__,_|___/\___| |_| |_|\___/ \__\___|
 * includes, forward decelerations and defines are contained
 * in Lab2Source.h. Try on computer functions are located in
 * TryOnCpu.cpp and forward decelerations are in Toc.h
 */

#include "Toc.h"
#include "lab2Sorce.h"

int main(){
	srand(time(NULL));
	runAllToC();

	//Problem a1
	pbmNum(1,'a');
	func_1();

	//Problem a2
	pbmNum(2,'a');
	int l=4;
	cout<<"The value of l is:"<<l<<endl;
	cout<<"The address of l is:"<<&l<<endl;
	func_2(l);

	//Problem a3
	pbmNum(3,'a');
	cout<<func_3()<<endl;
	int num1=41;
	cout<<"The value of num1 is:"<<num1<<endl;
	cout<<"The address of num1 is:"<<&num1<<endl;

	//Problem a4
	pbmNum(4,'a');
	int din=2;
	cout<<"The value of u is :"<<din<<endl;
	cout<<"The address of u is:"<<&din<<endl;
	func_4(&din);
	cout<<"The value of u is :"<<din<<endl;
	cout<<"The address of u is:"<<&din<<endl;

	//Problem a5
	pbmNum(5,'a');
	int val1=5;
	cout<<"The value of val1 is:"<<val1<<endl;
	cout<<"The address of val1 is:"<<&val1<<endl;
	func_5(val1);
	cout<<"The value of val1 is:"<<val1<<endl;
	cout<<"The address of val1 is:"<<&val1<<endl;

	//Problem b6
	pbmNum(6,'a');
	int a=10;
	int b=20;
	func_6(&a,&b);
	cout<<"a: "<<a<<", b: "<<b<<endl;

	//Problem a7
	pbmNum(7,'a');
	char r = 'a';
	char j = 'c';
	char d = 'h';
	char o = 'i';
	char w='q';
	char x='n';
	char v='k';
	func_7(r,&w,v);
	cout << w << r << j << d << o << x <<v<< endl;

	//Problem 8a
	pbmNum(8,'a');
	int value1=4;
	int value2=5;
	cout<<func_8a(value1,value2)<<endl;//test 1

	int value3=12;
	int value4=10;
	cout<<func_8a(value3,value4)<<endl;//test 2

	int value5=12;
	int value6=10;
	cout<<func_8a(value5,value6)<<endl;//test 3

	//problem b1
	pbmNum(1,'b');
	int len = 10, small = -1;
	randArr(len, small);
	cout << small <<endl;

	//problem b2
	pbmNum(2,'b');
	revArr(6);

	//problem b3
	pbmNum(3,'b');
	sucSort(6,50);

	//problem b4
	//int *i = stack();// The code doesn't compile it does not work because 'x'
	//cout << "Value: " << i <<" Address: " << &i << endl;//has popped off the stack

	//problem b5 & b5b
	pbmNum(5,'b');
	int arr5[25];
	for(int i = 0; i < 25; i++)
		arr5[i] = rand() %10 + 1;
	printArr(arr5,25);

	//problem b6
	pbmNum(6,'b');
	int size6, max6, min6;
	int *arr6 = genRanArr(&size6,&max6,&max6);
	printArr(arr6,size6);

	//problem b7
//	pbmNum(7,'b');
//	int *arr7 = genRanArrBroke(26);//This wont work because the pointer to the head of the array
//	printArr(arr7,26);//			has been removed from the stack

	//Problem 8
	pbmNum(8,'b');
	int arr1[4]={1,2,3,4};
	func8(arr1,4);

	//Problem 9
	pbmNum(9,'b');
	double q[5]={2,3,6,7,8};
	func9(q,5);

	//Problem 10b
	pbmNum(10,'b');
	int arr10[] = {5,4,4,3,6,6,6,8,9,5,1,3,8,8,1,8,9,9,3,2,2,2,6,1,2};

	int n = sizeof(arr10)/sizeof(arr10[0]); //evaluates and stores the size of arr in n

	int *newarr;

	newarr = func10(arr10,&n); //calls the function by passing arr and address of n

	for(int i=0;i<n;i++) //prints the newarr elements to console

	cout<<newarr[i]<<" ";
	cout<<endl;

	//problem b11
	pbmNum(11,'b');
	int arr11[] = {3,8,2,5,1,6,7};
	cout << winAvg(arr11,5) << endl;

	//problem b12
	pbmNum(12,'b');
	int arr12[] = {3,8,2,5,1,4,6,0,2};
	printArr(arr12,9);
	printArr(hannWin(arr12, 9),9);

	//problem b13
	pbmNum(13,'b');
	int arr13[] = {6, -2, -4, 5, -3, -4, -3, -1, 5, 2, -2, 0, -7, 2,
				-3, -4, -3, -1, -5, -3, 1, 7, 3, -7, -7, 3, -8, 1, -5,
				-4, -2, -5, -8, 0, -4};
	graphArr(arr13,35,8,-8);
	graphArr(hannWin(arr13,35),35,8,-8);

	//problem b14
	pbmNum(14,'b');
	int x14, y14;
	int **arr14 = twoDArr(&x14,&y14);
	for(int i = 0; i < y14; i++)
		printArr(arr14[i],x14);

	return 0;
}


/*(Problem 1)
 * INPUTS:
 * OUPTUTS: int and adress
 * DECRIPTION:
 * 		This function prints out a value and its address
 */

void func_1() {
	int y = 5;
	cout << "The value of y is:" << y << endl;
	cout << "The address of y is:" << &y << endl;
}
/*(//Problem 2)
 * INPUTS: int
 * OUPTUTS: int and adress
 * DECRIPTION:
 * 		This function takes an integer adds four and prints its value and address
 */

void func_2(int x) { //call by value
	x = x + 4; // adds 4 to input value
	cout << "The value of x is:" << x << endl;
	cout << "The address of x is:" << &x << endl;
}

/*(//Problem 3)
 * INPUTS: int
 * OUPTUTS: int and adress
 * DECRIPTION:
 * 		This function takes an integer adds four and prints its value and address
 */
int func_3() {
	int num = (rand() % 50);
	cout << "The value of y is:" << num << endl;
	cout << "The address of y is:" << &num << endl;
	return num;
}

/*(//Problem 4)
 * INPUTS: int pointer
 * OUPTUTS: int and adress
 * DECRIPTION:
 * 		This function takes an integers pointee, finds cube of the integer adds four and prints its value and address
 */
void func_4(int *m) { //call by pointer
	*m = (*m) * (*m) * (*m);
	cout << "The value at the address is:" << *m << endl;
	cout << "The address in the parameter is:" << m << endl;
	cout << "The address in the parameter is:" << &m << endl;
}
/*(//Problem 5)
 * INPUTS: int address
 * OUPTUTS: int and adress
 * DECRIPTION:
 * 		This function takes the reference of an integer and adds it a random number between 0 and 10
 * 		Prints out final value and address
 */
void func_5(int &k) { //call by alias
	int h = rand() % 10 + 1; //generates random numbers between 0 and 10 with 10 inclusive
	k = k + h; //adds
	cout << "The random number,h is:" << h << endl;
	cout << "The new value of k is:" << k << endl;
	cout << "The address of k is:" << &k << endl;
}
/*(//Problem 6)
 * INPUTS: int pointers
 * OUPTUTS:
 * DECRIPTION:
 * 		This function takes pointers of two integers, creates a pointer to the first parameter and
 * 		assigns the adress to the second parameter.
 * 		Prints out final value and address
 */
void func_6(int *c, int *d) {
	int *f = c; // create pointer f and sets it to address at c
	*f = 32; // sets value at f to 32
	f = d; // sets address f to address of d
	*f = 42; //sets value at f to 42
}

/*(//Problem 7)
 * INPUTS: char
 * OUPTUTS:
 * DECRIPTION:
 * 		This function takes three char variables by value, pointer and address and prints out machine as a word.
 */
void func_7(char a1, char *a2, char &a3) {
	a1 = 'u';
	*a2 = 'm';
	a3 = 'e';

}

/*(//Problem 8a)
 * INPUTS: int
 * OUPTUTS: bool
 * DECRIPTION:
 * 		This function takes two integer references as inputs and swap the values if
 * 		first value is greater than second value.It returns true if the values were swapped
 * 		and false if otherwise
 */
bool func_8a(int &num1, int &num2) {
	if (num1 > num2) {
		int num3 = num1;
		num1 = num2;
		num2 = num3;
		return true;
	}
	return false;
}

/*randArr problem 1b
 * INPUTS: int &
 * 		len: the length of the generated array
 * 		small: to be writed to with the smallest value in the array
 * OUTPUTS:
 * DECRIPTION:
 * 		This function generates a random array of length len then sets small
 * 		to the smallest element in that array
 */
void randArr(int &len, int &small){
	int a[len];
	for(int i = 0; i < len; i++)
		a[i] = 1+ rand() % 50;

	for(int i = 0; i < len; i++)
			cout << a[i] << "\t";
	cout<<endl;

	small = 51;
	for(int i = 0; i < len; i++)
		if(a[i] < small)
			small = a[i];
}

/*revArr problem 2b
 * INPUTS: int
 * 		len: the length of the generated array
 * OUPTUTS:
 * DECRIPTION:
 * 		This function generates a random int array of length len and prints it
 * 		to the console before reversing it then printing it again
 */
void revArr(int len){

	int a[len];
	for(int i = 0; i < len; i++)
		a[i] = rand() % 51;

	for(int i = 0; i < len; i++)
		cout << a[i] << "\t";
	cout<<endl;

	int temp;
	for(int i = 0; i < len/2 ; i++){
		temp = a[i];
		a[i] = a[len - i - 1];
		a[len - i -1] = temp;
	}

	for(int i = 0; i < len; i++)
		cout << a[i] << "\t";
	cout<<endl;
}

/*sucSort problem 3b
 * INPUTS: int:
 * 		len: the lenght of the random array
 * 		ran: 1 +  the maximum value of the random array
 * OUTPUTS:
 * DECRIPTION:
 * 		This function generates a random array of length len and with
 * 		values 0 to 1 - ran. It then prints the array, then prints the
 * 		array in acceding order and overrides the elements in the array
 * 		with 1+ran. It is the suckiest sorting algorithm
 */
void sucSort(int len, int ran){

	int a[len];
	for(int i = 0; i < len; i++)
		a[i] = rand() % ran;
	for(int i = 0; i < len; i++)
		cout << a[i] << "\t";
	cout<<endl;

	int count = 0, idx = 0;
	while(count < len){
		for(int i = 0; i < len; i++)
			if(a[i] < a[idx])
				idx = i;
		cout << a[idx] <<"\t";
		a[idx] = ran + 1;
		idx = 0;
		count++;
	}
	cout << endl;
}

/*stack problem 4b
 * INPUTS:
 * OUTPUTS:
 * DECRIPTION:
 * 		this function exist to demonstrate local variables going out of
 * 		scope and being removed from the stack
 */
//int *stack(){
//	int x = 3;
//	cout << "Value: " << x <<" Address: " << &x << endl;
//	return &x;
//}

/*printArr problem 5b
 * INPUTS: int
 * 		a[]: the array to be printed
 * 		size: size of a
 * OUTPUTS:
 * DECRIPTION:
 * 		Prints all values comma separated
 */
void printArr(int a[], int size){
	for(int i = 0; i < size; i++){
		if(i == size-1)
			cout << a[i];
		else
			cout << a[i] << ", ";
	}
	cout << endl;
}

/*genRanArr problem 6b
 * INPUTS: int*
 * 		size: to be set to the size of the array
 * 		max: to be set to the max of teh array
 * 		min: to be set to the min of the array
 * OUPTUTS:
 * 		int*: an array between 25-49 elements randomly chosen to be between -10&-5 or 5&10
 * DECREPTION:
 * 		Generates ouptut array
 */
int *genRanArr(int *size, int *max, int *min){
	*size = rand()%25 + 25;
	*max = 0; *min = 0;
	int *out = new int[*size];
	for(int i = 0; i < *size; i++){
		if(rand()%2){
			out[i] = rand() % 6 + 5;
			if(out[i] > *max)
				*max = out[i];
		}
		else{
			out[i] = -(rand() % 6 + 5);
			if(out[i] < *min)
				*min = out[i];
		}
	}
	return out;
}

/*genRanArrBroke problem 7b
 * INPUTS:
 * OUTPUTS:
 * DECRIPTION:
 * 		this function exist to demonstrate local variables and arrays going out of
 * 		scope and being removed from the stack
 */
//int *genRanArrBroke(int size){
//	int out[size];
//	for(int i = 0; i < size; i++){
//			if(rand()%2){
//				out[i] = rand() % 6 + 5;
//			}
//			else{
//				out[i] = -(rand() % 6 + 5);
//			}
//		}
//		return out;
//}

/*(Problem 8)
 * INPUTS: int
 * OUTPUTS:
 * DECRIPTION:
 * 		This function takes as inputs an array and its size and prints out the address of each element
 */

void func8(int arr[],int size){
	for(int i=0;i<size;i++)
		cout<<&arr[i]<<"\t";
	cout<<endl;
}

/*(Problem 9)
 * INPUTS: duoble,int
 * OUTPUTS:
 * DECRIPTION:
 * 		This function takes as inputs an array and its size and prints out the address of each element
 */

void func9(double arr1[],int size1){
	for(int j=0;j<size1;j++)
		cout<<&arr1[j]<<"\t";//prints out address of each element
	cout<<endl;
}

/*(Problem 10)
 * INPUTS:int
 * OUTPUTS:int
 * DECRIPTION:
 * 		This function takes as inputs an array and its size and returns a new array after removing
 * 		double consecutive elements in array
 * 		On each iteration if two consecutive elements are the same the size of array is reduced by 1
 */


int* func10(int arr[], int *size){

     int *newarr = new int[*size]; //created an array on heap using new operator
     int j=0,val=*size,i;

  for(i=0;i<val-1;i++) {//looping through the arr elements
	 if(arr[i]!=arr[i+1]) //if current element is not equal to next element then
        newarr[j++] = arr[i]; // then current element is added into newarr
     else
	   *size=*size-1; //else *size value is decreased by 1
}
   if(arr[i]!=arr[i-1]) //checks for the last element in the arr
       newarr[j] = arr[i];
  else *size=*size-1;
      return newarr; //returns the newarr
}

/*winAvg problem 11b
 * INPUTS: int
 * 		a[]: the array to be averaged
 * 		size: the size of a[]
 * OUPTUTS:
 * 		int: The weighted average of a[]
 * DECIRPTION:
 * 		This function takes the weighted average of an array
 * 		based on each elements position with the center
 * 		having the highest weight and the ends the lowest
 */
int winAvg(int a[], int size){
	int total = 0, div = 0, weight = 1, half = size/2;
	for(int i = 0; i < size; i++)
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

/*hannWin problem 12b
 * INPUTS: int
 * 		a[]: The array to be filtered
 * 		size: the size of a[]
 * OUTPUTS:
 * 		int *: The pointer to the first element in the filtered array
 * DECRIPTION:
 * 		This function performs Hanning filtering with a window size
 * 		specified in WINSIZE as it is defined
 */
int *hannWin(int a[], int size){
	int *out = new int [size];
	for(int i = 0; i < size; i ++)
		out[i] = 0;

	for(int i = 0; i <= size - WINSIZE; i ++)
		out[i+(WINSIZE/2)] = winAvg(&a[i], WINSIZE);

	return out;
}

/*graphArr problem 13b
 * INPUTS: int
 * 		arr[]: The array to be graphed
 * 		len: length of arr[]
 * 		max: max vlaue to be graphed
 * 		min: min value to be graphed
 * OUPTUTS:
 * DECRIPTION:
 * 		This function graphs and prints to output an array using *'s
 */
void graphArr(int arr[], int len, int max, int min){
	for(int i = max; i >= min; i--){
		cout<<i<<"|";
		for(int j = 0; j < len; j++){
			if(arr[j] == i)
				cout<<"*";
			else
				cout<<" ";
		}
	cout<<endl;
	}
	cout<<"--+-";
	for(int i = 0; i < len; i++)
		cout<<"-";
	cout<<endl;
}

/*twoDArr problem 14b
 * INPUTS: int
 * 		*row: a pointer to be filled with the randomly generated row
 * 		*col: a pointer to be filled with the randomly generated collum
 * OUTPUTS: int**
 * 		A 2d array of size row x col filled with 0's with five randomly
 * 		placed 1's
 * DECRIPTION:
 * 		This function generates the output array
 */
int ** twoDArr(int *row, int *col){
	*row = rand() % 5 + 5;
	*col = rand() % 4 + 4;

	//get a 2d array on the heap
	int **arr = new int *[*row];
	for (int i = 0; i < *row; i++)
		arr[i] = new int[*col];

	//fill it with 0's
	for(int i = 0; i < *col; i++)
		for(int j = 0; j < *row; j++)
			arr[i][j] = 0;

	//fill 5 of those spots with a 1
	for(int c = 0; c < 5; c++){
		int i = rand() % *col;
		int j = rand() % *row;
		if(arr[i][j] == 1)
			c--;
		else
			arr[i][j] = 1;

	}

	return arr;
}

/*pbmNum
 * This guy isnt part of the assignment its just to make the output cleaner
 */
void pbmNum(int num, char let){
	cout<<"----------------#"<<num<<let<<"----------------"<<endl;
}



