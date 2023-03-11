#include <iostream>
#include "game.h"


int main(int argc, char* args[]) {
    std::cout << "start" << std::endl;
  game game;
  game.Init();
  while(game.isRunning)
  {
    game.render();
    game.Event();
  }
  game.OnQuit();
  
  std::cout << "end" << std::endl;
  return 0;
}