#ifndef _BOARD_H
#define _BOARD_H
#include "Timer.h"
#include "Texture.h"
#include "InputManager.h"

using namespace QuickSDL;

class Board : public GameEntity {

private:
     Timer* mTimer;

     Texture* mOne;
     Texture* mTwo;
     Texture* mThree;
     Texture* mFour;
     Texture* mFive;
     Texture* mSix;
     Texture* mSeven;
     Texture* mEight;
     Texture* mEmpty;

    
public:
     Board();
     ~Board();


     void Random();

     bool check();
     
     void Swap();

     void Update();

     void Render();

};

#endif // !_PLAYSIDEBAR_H