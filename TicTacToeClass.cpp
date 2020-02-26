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
  board[3][3] = 0;
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
void TicTacToeClass::SET_boardLogic(int b[3][3]) {
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
int TicTacToeClass::GET_boardLogic() {
  return board[3][3];
}

bool TicTacToeClass::GET_P1Turn() {
  return p1_turn;
}

int TicTacToeClass::GET_P1Win() {
  return winner;
}
//************ END *****************

//********** FUNCTIONS *************
void TicTacToeClass::draw(&char b[3][3], &TicTacToeClass obj) {
	int a[3][3] = obj.GET_boardLogic();
	for (int i = 0; i < sizeof(b)/sizeof(*b); i++) {
		for (int j = 0; j < sizeof(b)/sizeof(*b); j++) {

			if (a[i][j] == 2)
				b[i][j] = 'O';
			else if (a[i][j] == 1)
			  b[i][j] = 'X';
			else
				b[i][j] = ' ';

			std::cout << b[i][j];

			if (j != 2)
				std::cout << '|';
		}
		std::endl;
		std::cout << "_ _ _" << std::endl;
	}
}

void TicTacToeClass::checkBoard(int b[3][3]) {
//TODO: check at points [0,0];[0,1];[0,2];[2,0] for a winner.
//TODO: if any lines qualify, set winner to true and break from for loop.
//TODO: call winner or tie function after requirements met.
//refer to ipad for ideas.e
	for (int i = 0; i < sizeof(b)/sizeof(*b); i++) {
		for (int j = 0; j < sizeof(b)/sizeof(*b); j++) {

		}
	}
}

void TicTacToeClass::winner() {

}

void TicTacToeClass::tie() {

}
//*********** END ******************
