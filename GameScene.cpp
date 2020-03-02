/*
 *
 *  Created by Edward Cruz on 02/26/2020
 *  Lab_05 --- GameScene.cpp
 *
 */

 #include <iostream>
 #include "TicTacToeClass.cpp"

 int main() {
    char more;
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
        do {
            game.menu(game, a, b);
            game.GET_Win();

        } while (game.GET_Win() == 0);
        
        std::cout << "\n\n\n\t\tDo more (Y/N) ?";
        std::cin  >> more;


    } while (more == 'y' || more == 'Y');

    return 0;
 }
