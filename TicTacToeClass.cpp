/*
 *
 * Created by Edward Cruz on 02/24/2020
 * Lab_05 --- TicTacToeClass.cpp
 *
*/

#include <iostream>
#include "TicTacToeClass.hpp"

//********* CONSTRUCTOR ************
	TicTacToeClass::TicTacToeClass() {
        board[3][3] = -1;
        p1_turn = true;
    }
//************ END *****************
	
//****** COPY CONSTRUCTOR **********
	TicTacToeClass::TicTacToeClass(int b[3][3], bool turn, bool win) {
        board[3][3] = b[3][3];
        p1_turn = turn;
        p1_win = win;
    }
//************ END *****************
	
//********** DESTRUCTOR ************
	TicTacToeClass::~TicTacToeClass() {
        delete &board[3][3];
        delete &p1_turn;
        delete &p1_win;
    }
//************ END *****************

//********** MUTATORS **************
	void TicTacToeClass::SET_board(int b[3][3]) {
        board[3][3] = b[3][3];
    }
	
    void TicTacToeClass::SET_P1Turn(bool turn) {
        p1_turn = turn;
    }
    void TicTacToeClass::SET_P1Win(bool win) {
        p1_win = win;
    }
//************ END *****************

//*********** ACCESSORS ************
	int TicTacToeClass::GET_board() {
        return board[3][3];
    }
	
    bool TicTacToeClass::GET_P1Turn() {
        return p1_turn;
    }

    bool TicTacToeClass::GET_P1Win() {
        return p1_win;
    }
//************ END *****************

//********** FUNCTIONS *************
    void TicTacToeClass::draw(int b[3][3]) {

    }

    void TicTacToeClass::winner(bool win) {

    }

    void TicTacToeClass::tie() {

    }
//*********** END ******************