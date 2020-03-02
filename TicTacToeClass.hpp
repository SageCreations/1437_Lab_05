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
	void SET_LogicBoard(int[3][3], int num);
	void SET_P1Turn(bool);
	void SET_Win(int);
	void SET_ViewBoard(char[3][3]);
//************ END *****************

//*********** ACCESSORS ************
	int  GET_LogicBoard();
	bool GET_P1Turn();
	int  GET_Win();
	char GET_ViewBoard();
//************ END *****************

//********* FUNCTIONS **************
	void draw(TicTacToeClass &obj, int[3][3], char[3][3]);
	void checkBoard(int[3][3]);
	void menu(TicTacToeClass &obj, int[3][3], char[3][3]);
//*********** END ******************

private:
	int  logicBoard[3][3];
	char viewBoard[3][3];
	bool p1_turn;
	int  winner;
};

#endif /* TICTACTOECLASS_HPP */
