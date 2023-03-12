#pragma once
#include "raylib.h"
#include "Button.h"
#include <stdio.h>
#include <iostream>
#include <string>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
class Window
{
    public:
        Window();
        ~Window();

        void Init(int width, int height, const char* name = "game");
        void update();
        void render();
        void Event();
        void OnQuit();
        bool isRunning();
    private:
        Vector2 mousePoint = {0.0f, 0.0f};
        Button *button;
        

};