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
  logicBoard[3][3];
  viewBoard[3][3];
  p1_turn = true;
  winner = 0;
}
//************ END *****************

//****** COPY CONSTRUCTOR **********
TicTacToeClass::TicTacToeClass(int a[3][3], char b[3][3], bool turn, int win) {
  logicBoard[3][3] = {a[3][3]};
  viewBoard[3][3] = {b[3][3]};
  p1_turn = turn;
  winner = win;
}
//************ END *****************

//********** DESTRUCTOR ************
TicTacToeClass::~TicTacToeClass() {
  delete &logicBoard[3][3];
  delete &viewBoard[3][3];
  delete &p1_turn;
  delete &winner;
}
//************ END *****************

//********** MUTATORS **************
void TicTacToeClass::SET_LogicBoard(int b[3][3], int n) {
  	n = n-1;
	int i, j;
	if (n < 3)  {
	    i = n;
		j = 0;
	} else {
		i = n % 3;
	}

	if (p1_turn)  {
		logicBoard[i][j] = 1;
	} else {
		logicBoard[i][j] = 2;
	}
}

void TicTacToeClass::SET_ViewBoard(char b[3][3]) {
	viewBoard[3][3] = b[3][3];
}

void TicTacToeClass::SET_P1Turn(bool turn) {
  	p1_turn = turn;
}

void TicTacToeClass::SET_Win(int win) {
  	winner = win;
}
//************ END *****************

//*********** ACCESSORS ************
int TicTacToeClass::GET_LogicBoard() {
  	return logicBoard[3][3];
}

char TicTacToeClass::GET_ViewBoard() {
	return viewBoard[3][3];
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
void TicTacToeClass::draw(TicTacToeClass &obj, int a[3][3], char b[3][3]) {
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			switch (a[i][j]) {
				case 1:
					b[i][j] = 'X';
					break;
				case 2:
					b[i][j] = 'O';
					break;
			}
			std::cout << b[i][j];

			if (j != 2)
				std::cout << '|';
		}
		std::cout << std::endl;
		if (i != 2)
			std::cout << "-----" << std::endl;
	}



}

void TicTacToeClass::checkBoard(int a[3][3]) {
//TODO: check at points [0,0];[0,1];[1,0];[0,2];[2,0] for a winner.
//TODO: if any lines qualify, set winner to true and break from for loop.
//TODO: call winner or tie function after requirements met.
//refer to ipad for ideas.e
	bool won = false;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
		}
	}
}

void TicTacToeClass::menu(TicTacToeClass &obj, int a[3][3], char b[3][3]) {
	if (obj.GET_P1Turn()) {
		std::cout << "\n\n>>Player's 1 turn.\n";
	} else {
		std::cout << "\n\n>>Player's 2 turn.\n";
	}
	
	draw(obj, a, b);

	int num;
	std::cout << "\nPick whichever spot you would like: ";
	std::cin  >> num;

	obj.SET_LogicBoard(a, num);

	obj.checkBoard(a);
	obj.SET_P1Turn(!p1_turn);


}
//*********** END ******************
