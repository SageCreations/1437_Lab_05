/*
 *
 *  Created by Edward Cruz on 02/26/2020
 *  Lab_05 --- GameScene.cpp
 *
 */

 #include <iostream>
 #include "TicTacToeClass.cpp"

 int main() {
    int win;
    int c[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int a[3][3] = {
        {0, 0, 0}, 
        {0, 0, 0}, 
        {0, 0, 0}};
    char b[3][3] = {
        {'1', '2', '3'}, 
        {'4', '5', '6'}, 
        {'7', '8', '9'}
    };

    TicTacToeClass game;


        
    do {
        game.menu(game, a, b, c);
        if(game.GET_Win() == 3) {
            win = 3;
        } else {
            win = game.checkBoard(a);
        } 
        std::cout << "\033[2J" << std::endl;
    } while (win == 0);

    if (win == 1 || win == 2) {    
        std::cout << "\n\n\t\tPLAYER " << win << " HAS WON!!!\n\n";
    } else {
        std::cout << "\n\n\t\tIT'S A TIE!!!\n\n";
    }

    return 0;
 }
