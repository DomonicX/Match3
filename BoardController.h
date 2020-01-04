#ifndef BOARDCONTROLLER_H
#define BOARDCONTROLLER_H

#include <Board.h>
#include <Vec2.h>
#include <BoardView.h>
#include <SlotObject.h>
class BoardController
{
    public:
     //   BoardController();

        BoardController(BoardView &newView, Board &newBoard) : gameView(&newView), gameBoard(&newBoard) {}
        virtual ~BoardController();
        void ChangeBoard(Slot::State type){gameBoard->ChangeBoardState(type);}
        bool CheckMatchFound();
        void deleteMatch();
        void DisplayView(SDL_Renderer &Rend);
        void SelectObeject(int x,int y);
        void SetColour(Uint8 R = 0,Uint8 G = 0,Uint8 B = 0 );
        void Update();

void GetGameTime(Uint32 currentGameTime);
bool isWaiting();
void Restart();
void SetUpGame(){Restart();}
void SelectandDeleteObject(int x,int y);

uint32_t gameTime = 0;
struct Colour{
Uint8 R;
Uint8 G;
Uint8 B;} colour;
bool isDeathLoop = false;
bool isUpdatingLoop = false;
bool isMatchingLoop = false;
    protected:

    private:
        BoardView *gameView;
        Board *gameBoard;
        SlotObject *SelectedObject = NULL;
        std::vector<SlotObject*>deletedSlotObjects;
};

#endif // BOARDCONTROLLER_H
