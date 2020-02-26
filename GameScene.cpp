/*
 *
 *  Created by Edward Cruz on 02/26/2020
 *  Lab_05 --- GameScene.cpp
 *
 */

 #include <iostream>
 #include "TicTacToeClass.hpp"

 int main() {
  TicTacToeClass game;

  game.draw(game.GET_boardLogic(), game);

  return 0;
 }
