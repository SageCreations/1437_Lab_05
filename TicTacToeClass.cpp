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
  boardLogic[3][3] = 0;
  boardView[3][3] = ' ';
  p1_turn = true;
  winner = 0;
}
//************ END *****************

//****** COPY CONSTRUCTOR **********
TicTacToeClass::TicTacToeClass(int b[3][3], char a[3][3], bool turn, int win) {
  boardLogic[3][3] = b[3][3];
  boardView[3][3] = a[3][3];
  p1_turn = turn;
  winner = win;
}
//************ END *****************

//********** DESTRUCTOR ************
TicTacToeClass::~TicTacToeClass() {
  delete &boardLogic[3][3];
  delete &boardView[3][3];
  delete &p1_turn;
  delete &winner;
}
//************ END *****************

//********** MUTATORS **************
void TicTacToeClass::SET_BoardLogic(int b[3][3]) {
  boardLogic[3][3] = b[3][3];
}

void TicTacToeClass::SET_BoardView(char b[3][3]) {
	boardView[3][3] = b[3][3];
}

void TicTacToeClass::SET_P1Turn(bool turn) {
  	p1_turn = turn;
}

void TicTacToeClass::SET_Win(int win) {
  	winner = win;
}
//************ END *****************

//*********** ACCESSORS ************
int TicTacToeClass::GET_BoardLogic() {
  return boardLogic[3][3];
}

char TicTacToeClass::GET_BoardView() {
	return boardView[3][3];
}

bool TicTacToeClass::GET_P1Turn() {
  return p1_turn;
}

int TicTacToeClass::GET_Win() {
  return winner;
}
//************ END *****************

//********** FUNCTIONS *************
//draw function that draws and saves current board based off of boardLogic[3][3]
void TicTacToeClass::draw(TicTacToeClass &obj) {
	int  a[3][3] = {obj.GET_BoardLogic()};
	char b[3][3] = {obj.GET_BoardView()};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

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
		std::cout << std::endl;
		if (i != 2)
			std::cout << "-----" << std::endl;
	}

	obj.SET_BoardView(b);
}

void TicTacToeClass::checkBoard(int b[3][3]) {
//TODO: check at points [0,0];[0,1];[0,2];[2,0] for a winner.
//TODO: if any lines qualify, set winner to true and break from for loop.
//TODO: call winner or tie function after requirements met.
//refer to ipad for ideas.e
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
		}
	}
}

void TicTacToeClass::CheckWinner() {

}

void TicTacToeClass::tie() {

}
//*********** END ******************
