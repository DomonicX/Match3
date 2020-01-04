#ifndef TEXT_H
#define TEXT_H
#define SDL_MAIN_HANDLED
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <Vec2.h>

class Text
{
    public:
    Text(){}
    Text(std::string Title,int TextSize,Vec2 Pos);
      Vec2 pos;

    virtual ~Text();
    void display(SDL_Renderer&Rend);
    void CreateTextTexture(SDL_Renderer&Rend);
    TTF_Font *textFront;
    int textSize;
    std::string title;
    SDL_Rect dstrect;
    SDL_Color color;
    SDL_Surface * surface;
    SDL_Texture * texture;
    void Init(int FontSize,TTF_Font &font,std::string Title);
    void Update(SDL_Renderer& Rend,TTF_Font& font);
    protected:

    private:
};

#endif // TEXT_H
