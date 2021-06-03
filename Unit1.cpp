//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int xBall = -8;
int yBall = 8;
int remainingBricks = 12;

bool isCollisionOccurring(TImage *imageBall, TImage *imageBrick) {
 ;
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerBallTimer(TObject *Sender)
{
    ImageBall->Left += xBall;
    ImageBall->Top += yBall;

    // Catch the ball on the left wall.
    if (ImageBall->Left - 5 <= ShapeBackground->Left)
        xBall = -xBall;

    // Catch the ball on the right wall.
    if ((ImageBall->Left + ImageBall->Width + 5) >= ShapeBackground->Width)
        xBall = -xBall;

    // Catch the ball on the upper wall.
    if (ImageBall->Top-5 <= ShapeBackground->Top)
        yBall = -yBall;

    // Game over.
    if (ImageBall->Top >= (ImagePaddle->Top + ImagePaddle->Height + 16)){
        TimerBall->Enabled = false;
        ImageBall->Visible = false;
    } else if (ImageBall->Left > ImagePaddle->Left - ImageBall->Width/2 &&
               ImageBall->Left < ImagePaddle->Left + ImagePaddle->Width &&
               ImageBall->Top + ImageBall->Height > ImagePaddle->Top) {
        if (yBall > 0)
            yBall = - yBall;
    }

    // Collision for brick 1.
    if (isCollisionOccurring(ImageBall, ImageBrick1) && ImageBrick1->Visible = true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick1->Visible = false;
    }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TimerPaddleLeftTimer(TObject *Sender)
{   if (ImagePaddle->Left > 10)
        ImagePaddle->Left -= 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TimerPaddleRightTimer(TObject *Sender)
{   if (ImagePaddle->Left + ImagePaddle->Width +10 < ShapeBackground->Width)
    ImagePaddle->Left += 10;          
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if (Key == VK_LEFT)
        TimerPaddleLeft->Enabled = true;
    if (Key == VK_RIGHT)
        TimerPaddleRight->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if (Key == VK_LEFT)
        TimerPaddleLeft->Enabled = false;
    if (Key == VK_RIGHT)
        TimerPaddleRight->Enabled = false;
}
//---------------------------------------------------------------------------
