#include <iostream>
#include "game.h"

int main(void)
{
    game Game;

    Game.Init(800, 600);

    while (!Game.isRunning())
    {
        Game.render();
    }

    Game.OnQuit();

    return 0;
}