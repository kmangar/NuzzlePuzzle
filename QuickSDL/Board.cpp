#include "Board.h"

Board::Board() {
     mTimer = Timer::Instance();
     float* listX = new float[3]; 
     listX[0] = 340.0f; 
     listX[1] = 500.0f; 
     listX[2] = 660.0f;

     float* listY = new float[3]; 
     listY[0] = 220.0f;
     listY[1] = 420.0f;
     listY[2] = 600.0f;


     mOne = new Texture("1.png");
     mOne->Parent(this);
     mOne->Pos(Vector2(listX[0], listY[0]));
     mOne->setter(1);
     mOne->Scale(Vector2(0.2f, 0.2f));
     
     mTwo = new Texture("2.png");
     mTwo->Parent(this);
     mTwo->setter(2);
     mTwo->Pos(Vector2(listX[1], listY[0]));
     mTwo->Scale(Vector2(0.2f, 0.2f));

     mThree = new Texture("3.png");
     mThree->Parent(this);
     mThree->setter(3);
     mThree->Pos(Vector2(listX[2], listY[0]));
     mThree->Scale(Vector2(0.1f, 0.1f));
     
     mFour = new Texture("4.png");
     mFour->Parent(this);
     mFour->setter(4);
     mFour->Pos(Vector2(listX[0], listY[1]));
     mFour->Scale(Vector2(0.1f, 0.1f));
     
     mFive = new Texture("5.png");
     mFive->Parent(this);
     mFive->setter(5);
     mFive->Pos(Vector2(listX[1], listY[1]));
     mFive->Scale(Vector2(0.1f, 0.1f));
     
     mSix = new Texture("6.png");
     mSix->Parent(this);
     mSix->setter(6);
     mSix->Pos(Vector2(listX[2], listY[1]));
     mSix->Scale(Vector2(0.1f, 0.1f));
     
     mSeven = new Texture("7.png");
     mSeven->Parent(this);
     mSeven->setter(7);
     mSeven->Pos(Vector2(listX[0], listY[2]));
     mSeven->Scale(Vector2(0.1f, 0.1f));
     
     mEight = new Texture("8.png");
     mEight->Parent(this);
     mEight->setter(8);
     mEight->Pos(Vector2(listX[1], listY[2]));
     mEight->Scale(Vector2(0.1f, 0.1f));
     
     mEmpty = new Texture("9.png");
     mEmpty->Parent(this);
     mEmpty->setter(9);
     mEmpty->Pos(Vector2(listX[2], listY[2]));
     mEmpty->Scale(Vector2(0.0f, 0.0f));
}

Board::~Board() {
     mTimer = NULL;

     delete mOne;
     mOne = NULL;

     delete mTwo;
     mTwo = NULL;

     delete mThree;
     mThree = NULL;
     
     delete mFour;
     mFour = NULL;
     
     delete mFive;
     mFive = NULL;
     
     delete mSix;
     mSix = NULL;
     
     delete mSeven;
     mSeven = NULL;
     
     delete mEight;
     mEight = NULL;

     delete mEmpty;
     mEmpty = NULL;
   
}


void Board::Update() {

}

void Board::Render() {
     mOne->Render();
     mTwo->Render();
     mThree->Render();
     mFour->Render();
     mFive->Render();
     mSix->Render();
     mSeven->Render();
     mEight->Render();
     mEmpty->Render();
}