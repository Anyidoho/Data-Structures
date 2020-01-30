/*
 * Game.h
 *
 *  Created on: Sep 19, 2019
 *      Author: elorm
 */
#include <string>
#ifndef GAME_H_
#define GAME_H_

class Game{
	   char **board;
	   char PlayerX;
       char PlayerY;
public:
       Game(char player1,char player2);
       ~Game();
       void InitializeSquare();
       void PrintBoard();
       bool BoardFull();
       bool CheckWin(char f);
       void PersonPlay(char f);
       void PlayGame();
       bool operator==(Game b);
};




#endif /* GAME_H_ */
