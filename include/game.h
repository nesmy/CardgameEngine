#pragma once
#include "raylib.h"
#include <stdio.h>
#include <iostream>
#include <string>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
class game
{
    public:
        game();
        ~game();

        void Init(int width, int height, const char* name = "game");
        void update();
        void render();
        void Event();
        void OnQuit();
        bool isRunning();
    private:
        

};