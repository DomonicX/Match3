#ifndef SLOTOBJECT_H
#define SLOTOBJECT_H

#define SDL_MAIN_HANDLED
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include <Vec2.h>
class SlotObject
{
    public:
        SlotObject();

        SlotObject(Vec2 Pos) : pos(Pos){}
        virtual ~SlotObject();



bool isAlive = false;
bool isFalling = false;
        enum NutTypes {NUT_1,NUT_2,NUT_3,NUT_4,NUT_5,NUT_6,NUT_7};
        NutTypes currentNutType = NUT_1;
        enum State {FALLING,WAITING,DYING,SPAWNING};
        State CurrentSate = SPAWNING;
        Vec2 pos;
        Vec2 targetPos;
                void Update();
                void SetState();
    protected:

    private:
};

#endif // SLOTOBJECT_H
