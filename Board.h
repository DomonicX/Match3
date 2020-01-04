#ifndef BOARD_H
#define BOARD_H
#define SDL_MAIN_HANDLED
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>


#define SCREEN_HEIGHT 556

#include <float.h>
#include <algorithm>

#include <Vec2.h>
#include <Slot.h>
#include <bits/stdc++.h>
//#include <float.h>
//#include <algorithm>
#include <vector>
#include <iterator>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
class Board
{
    public:
        Board();
        virtual ~Board();
        Board(Vec2 BoardPos, std::vector<Slot*>slotLevel) : pos(BoardPos), Slots(slotLevel){
            std::cout << "creating board at Pos : " <<
             " Y " << pos.Y <<
             " X " << pos.X <<
             " W " << pos.W <<
             " H " << pos.H << std::endl;
}
       Vec2 pos;
       std::vector<Slot*>Slots;
       void ChangeBoardState(Slot::State Type);
       void RefreshBoard();
       void clearBoard();
       void displaySlotSates() {for(int i = 0; i<Slots.size(); i++){ std::cout << " Slot number  " << i << " "; Slots[i]->displaySates();}}
       void Update();
       void deleteObject(int slotindex,int SltObjNumber);

bool isStateWaiting();

    protected:

    private:
};

#endif // BOARD_H
