#include "PlaySideBar.h"

PlaySideBar:: PlaySideBar() {
     mTimer = Timer::Instance();
     mAudio = AudioManager::Instance();

     mBackground = new Texture("black.png");
     mBackground->Parent(this);
     mBackground ->Pos(Vector2(12.0f, 280.0f));
     mBackground->Scale(Vector2(12.0f, 280.0f));

     mTable = new Texture("table.png");
     mTable->Parent(this);
     mTable->Pos(VEC2_ZERO);


     mBestLabel = new Texture("Best", "emulator.ttf", 28, { 150, 0, 0 });//prints Best on the left corner
     mBestLabel->Parent(this);
     mBestLabel->Pos(Vector2(25.0f, 180.0f));

     mBestScoreBoard = new Scoreboard;
     mBestScoreBoard->Parent(this);
     mBestScoreBoard->Pos(Vector2(25.0f, 230.0f));


     mCurrentLabel = new Texture("Current", "emulator.ttf", 28, { 150, 0, 0 });//prints Current on the middle left corner
     mCurrentLabel->Parent(this);
     mCurrentLabel->Pos(Vector2(25.0f, 280.0f));
     
     mTimeLabel = new Texture("Timer", "emulator.ttf", 28, { 150, 0, 0 });//prints Timer on the bottom left corner
     mTimeLabel->Parent(this);
     mTimeLabel->Pos(Vector2(25.0f, 400.0f));

}

PlaySideBar::~PlaySideBar() {
     mTimer = NULL;
     mAudio = NULL;

     delete mBackground;
     mBackground = NULL;

     delete mBestLabel;
     mBestLabel = NULL;

     delete mCurrentLabel;
     mCurrentLabel = NULL;
     
     delete mTimeLabel;
     mTimeLabel = NULL;
     
     delete mBestScoreBoard;
     mBestScoreBoard = NULL;


}
void PlaySideBar::SetBestMove(int Score) {
     mBestScoreBoard->Score(Score);
}

void PlaySideBar::Update() {

}

void PlaySideBar::Render() {
     mBackground->Render();
     mBestLabel->Render();
     mBestScoreBoard->Render();

     mCurrentLabel->Render();

     mTimeLabel->Render();

}