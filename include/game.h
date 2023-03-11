#pragma once
#include <SDL2/SDL.h>
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

        void Init(const char* name = "Game");
        void update();
        void render();
        void Event();
        void OnQuit();
        bool isRunning = true;
    private:
        SDL_Window* window = NULL;
        SDL_Surface* screenSurface = NULL;
        SDL_Event event;

};