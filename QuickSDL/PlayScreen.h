#ifndef _PLAYSCREEN_H
#define _PLAYSCREEN_H

#include "Timer.h"
#include "Texture.h"
#include "InputManager.h"
#include "PlaySideBar.h"

using namespace QuickSDL;

class PlayScreen : public GameEntity {
private:
     Timer* mTimer;
     InputManager* mInput;

     PlaySideBar* mSideBar;

public:
     PlayScreen();
     ~PlayScreen();

     void Update();

     void Render();


};

#endif