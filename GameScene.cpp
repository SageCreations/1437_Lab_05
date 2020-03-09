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
        game.menu(game, a, b);
        win = game.checkBoard(a);
    } while (win == 0);
        
    std::cout << "\n\n\t\tPLAYER " << win << " HAS WON!!!\n\n";

    return 0;
 }
