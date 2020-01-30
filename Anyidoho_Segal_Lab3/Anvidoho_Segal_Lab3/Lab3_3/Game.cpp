/*
 * Game.cpp
 *
 *  Created on: Sep 19, 2019
 *      Author: elorm
 */
#include "Game.hpp"

#include <iostream>
using namespace std;


Game::Game(char player1,char player2){
	board=new char* [3];
	PlayerX=player1;
	PlayerY=player2;
	InitializeSquare();

}

Game::~Game(){
	   delete board;
	   cout<<"The board has been destroyed"<<endl;
}

void Game::InitializeSquare(){//Initializes all squares to '_'
	for(int j=0;j<3;j++){
		board[j]=new char[3];
	}
	for(int i=0;i<3;i++){
		for (int k=0;k<3;k++){
			board[i][k]='_';
	}
  }
}

void Game::PrintBoard(){//Prints out each element on the board
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			cout<<board[i][k]<<"\t";
		}
	cout<<endl;
	}
}

bool Game::BoardFull(){//Checks if the board is full and returns true else false
	int tmp = 0;
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++)
			if(board[i][k]=='_')
				tmp++;
	}
	return tmp == 0;
}
bool Game::CheckWin(char f){
	for(int i=0;i<3;i++){//checking for rows
		if(board[i][0]==f && board[i][1]==f && board[i][2]==f)
			return true;
	}
	for(int j=0;j<3;j++){//checking for columns
		if(board[0][j]==f && board[1][j]==f && board[2][j]==f)
			return true;
	}
	//check diagonal
	int i=0;
	int j=0;
	if(board[i][j]==f && board[i+1][j+1]==f && board[i+2][j+2]==f){
		return true;
}
	j=2;//looking at the diagonal from the opposite side of square
	if(board[i][j]==f && board[i+1][j-1]==f && board[i+2][j-2]==f){
		return true;

}
	return false;
}

void Game::PersonPlay(char f){
	int rownum;
	int colnum;
	cout << endl << "Player:" << f<< endl;//print player's name
	cout<<"Enter row number"<<endl;//row number
	cin>>rownum;
	cout<<"\n";
	cout<<"Enter column number"<<endl;//column number
	cin>>colnum;
	cout<<"\n";

	while(board[rownum-1][colnum-1]!='_'){//continue to ask user for row and column number while square is not empty
		cout<<"Enter row number"<<endl;//row number
		cin>>rownum;
		cout<<"\n";
		cout<<"Enter column number"<<endl;//column number
		cin>>colnum;
		cout<<"\n";
	}
	board[rownum-1][colnum-1] = f;
	PrintBoard();


	}

void Game::PlayGame(){ //this method plays the game
char pturn='x';
while(true){
	if(!BoardFull()){
		PersonPlay(pturn);
	    if(CheckWin(pturn)){
		   cout<<"\n"<<"Player "<<pturn<<" has won"<<endl;
	       break;
	    }
	    if(pturn=='x')
		   pturn='o';
	    else
		   pturn='x';
	}
	else{
		cout<<"\n"<<"It's a tie!"<<endl;
		break;
	}
  }
}

bool Game::operator==(Game b){
	for(int i=0;i<3;i++)
		for(int k=0;k<3;k++)
			if(board[i][k] != b.board[i][k])
				return false;
	return true;
}





