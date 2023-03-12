#include "Button.h"
#include "cmath"

Button::Button(const char* Texture, const char* Sound,float x, float y, float width, float height, Color color)
{
    SetTexture(Texture);
    SetSound(Sound);
    SetPosition(x,y);
    SetSize(width, height);
    SetColor(color);
}

Button::~Button()
{
    UnloadTexture(TexButton);
    UnloadSound(FxButton);
}

void Button::init()
{
    Rectangle dest = { PosButton.x, PosButton.y, fabsf(source.width), fabsf(source.height) };
    Vector2 origin = { 0.0f, 0.0f };

    DrawTexturePro(TexButton, source, dest, origin, 0.0f, tint);
}

void Button::SetPosition(float x, float y)
{
    PosButton.x = x;
    PosButton.y = y;
}

Vector2 Button::GetPosition()
{
    return PosButton;
}

void Button::SetTexture(const char* Texture)
{
    TexButton = LoadTexture(Texture);
}

Texture2D Button::GetTexture()
{
    return TexButton;
}

void Button::SetSound(const char* Sound)
{
    FxButton = LoadSound(Sound);
}

Sound Button::GetSound()
{
    return FxButton;
}

void Button::SetColor(Color color)
{
    tint = color;
}

Color Button::GetColor()
{
    return tint;
}

void Button::SetSize(float width, float height)
{
    source.width = width;
    source.height = height;
}

Rectangle Button::GetSize()
{
    return source;
}
