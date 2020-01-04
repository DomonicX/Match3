#ifndef SLOT_H
#define SLOT_H
#include <iostream>
#include <SlotObject.h>
#include <Vec2.h>
#include <vector>
#define SDL_MAIN_HANDLED
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>

#include <memory>
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <stdio.h>

#include <string>
#include <sstream>
#include <conio.h>
#include <cstdlib>

#include <time.h>
#define SCREEN_HEIGHT 556
class Slot
{
    public:
        Slot();
        virtual ~Slot();
        Slot(Vec2 Pos, int SlotObjNum) : pos(Pos) , NumberofSlotOBjects(SlotObjNum) { std::cout << "Slot Created \n";}
        Vec2 pos;
        enum State {ACTIVE,AWAITING_REQUEST,UPDATING_NEW_TARGET_POS,ACTIVE_DELETING};
        State currentState = AWAITING_REQUEST;
        std::vector<SlotObject*>SlotObjects;
        int NumberofSlotOBjects;
        void displaySates();
           int GetState(){return currentState;};
        void SetState(State type){currentState = type;};
        void CreateNewSlotObject(Vec2 spawningPos);
        void Update();
    protected:

    private:
};

#endif // SLOT_H
