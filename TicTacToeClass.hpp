/*
 *
 *  Created by Edward Cruz on 02/24/2020
 *  Lab_05 --- ticTacToeClass.hpp
 *
*/

#ifndef TICTACTOECLASS_HPP
#define TICTACTOECLASS_HPP

#include<iostream>

class TicTacToeClass {
public:
//********* CONSTRUCTOR ************
	TicTacToeClass();
//************ END *****************

//****** COPY CONSTRUCTOR **********
	TicTacToeClass(int[3][3], bool, bool);
//************ END *****************

//********** DESTRUCTOR ************
	~TicTacToeClass();
//************ END *****************

//********** MUTATORS **************
	void SET_board(int[3][3]);
	void SET_P1Turn(bool);
	void SET_P1Win(bool);
//************ END *****************

//*********** ACCESSORS ************
	int GET_board();
	bool GET_P1Turn();
	bool GET_P1Win();
//************ END *****************

//********* FUNCTIONS **************
	void draw(int[3][3]);
	void winner(bool);
	void tie();
//*********** END ******************

private:
	int board[3][3];
	bool p1_turn;
	bool p1_win;
};

#endif /* TICTACTOECLASS_HPP */
