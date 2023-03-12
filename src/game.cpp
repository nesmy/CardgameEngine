#include "game.h"

game::game()
{
}

game::~game()
{
}

void game::Init(int width, int height, const char* name)
{
    InitWindow(width, height, name);
}

void game::update()
{
}

void game::render()
{
    BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
}

void game::Event()
{
  
}

void game::OnQuit()
{
  CloseWindow();
}

bool game::isRunning()
{
    return WindowShouldClose();
}
