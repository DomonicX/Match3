#ifndef BOARDVIEW_H
#define BOARDVIEW_H

#define SDL_MAIN_HANDLED
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <Board.h>
#include <SlotObject.h>
class BoardView
{
    public:
        BoardView();
        virtual ~BoardView();

        void Display(SDL_Renderer &Rend,SlotObject &SltObjDisplay,Uint8 R, Uint8 G, Uint8 B);
        void DisplaySelectedObject(SDL_Renderer &Rend,SlotObject &SltObj,Uint8 R, Uint8 G, Uint8 B);
 void DisplayDeletedObjects(SDL_Renderer &Rend,SlotObject &SltObjl);


    protected:

    private:
};

#endif // BOARDVIEW_H
