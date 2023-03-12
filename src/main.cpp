#include <iostream>
#include "Window.h"

int main(void)
{
    Window Game;

    Game.Init(800, 600);

    while (!Game.isRunning())
    {
        Game.render();
    }

    Game.OnQuit();

    return 0;
}