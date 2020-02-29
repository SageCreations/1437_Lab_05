/*
 *
 *  Created by Edward Cruz on 02/24/2020
 *  Lab_05 --- ticTacToeClass.hpp
 *
*/

#ifndef TICTACTOECLASS_HPP
#define TICTACTOECLASS_HPP

#include <iostream>

class TicTacToeClass {
public:
//********* CONSTRUCTOR ************
	TicTacToeClass();
//************ END *****************

//****** COPY CONSTRUCTOR **********
	TicTacToeClass(int[3][3], char[3][3], bool, int);
//************ END *****************

//********** DESTRUCTOR ************
	~TicTacToeClass();
//************ END *****************

//********** MUTATORS **************
	void SET_BoardLogic(int[3][3]);
	void SET_P1Turn(bool);
	void SET_Win(int);
	void SET_BoardView(char[3][3]);
//************ END *****************

//*********** ACCESSORS ************
	int  GET_BoardLogic();
	bool GET_P1Turn();
	int  GET_Win();
	char GET_BoardView();
//************ END *****************

//********* FUNCTIONS **************
	void draw(TicTacToeClass &obj);
	void checkBoard(int[3][3]);
	void CheckWinner();
	void tie();
//*********** END ******************

private:
	int  boardLogic[3][3];
	char boardView[3][3];
	bool p1_turn;
	int  winner;
};

#endif /* TICTACTOECLASS_HPP */
