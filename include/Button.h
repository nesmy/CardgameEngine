#pragma once
#include "raylib.h"

class Button
{
    public:
        Button(const char* Texture, const char* Sound,float x, float y, float width, float height, Color color);
        ~Button();
        void init();

        void SetPosition(float x, float y);
        Vector2 GetPosition();
        void SetTexture(const char* Texture);
        Texture2D GetTexture();
        void SetSound(const char* Sound);
        Sound GetSound();
        void SetColor(Color color);
        Color GetColor();
        void SetSize(float width, float height);
        Rectangle GetSize();
    private:
        Sound FxButton;
        Texture2D TexButton;
        Vector2 PosButton;
        Color tint;
        Rectangle source;
        
};