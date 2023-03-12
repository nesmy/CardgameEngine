#include "Window.h"

Window::Window()
{
}

Window::~Window()
{
}

void Window::Init(int width, int height, const char* name)
{
    InitWindow(width, height, name);
}

void Window::update()
{
}

void Window::render()
{
    BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
}

void Window::Event()
{
  
}

void Window::OnQuit()
{
  CloseWindow();
}

bool Window::isRunning()
{
    return WindowShouldClose();
}
