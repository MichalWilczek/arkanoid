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

bool isCollisionOccurring(TImage *ball, TImage *brick) {

    bool collisionTop = (ball->Top >= brick->Top - ball->Height);
    bool collisionBottom = (ball->Top <= brick->Top + brick->Height);
    bool collisionLeft = (ball->Left >= brick->Left - brick->Width);
    bool collisionRight = (ball->Left <= brick->Left + brick->Width);

    if (collisionTop && collisionBottom && collisionLeft && collisionRight)
        return true;
    else
        return false;
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
        ButtonPlayAgain->Caption = "Game over! Play again?";
        ButtonPlayAgain->Visible = true;

    } else if (ImageBall->Left > ImagePaddle->Left - ImageBall->Width/2 &&
               ImageBall->Left < ImagePaddle->Left + ImagePaddle->Width &&
               ImageBall->Top + ImageBall->Height > ImagePaddle->Top) {
        if (yBall > 0)
            yBall = - yBall;
    }

    if (remainingBricks <= 0){
        TimerBall->Enabled = false;
        ImageBall->Visible = false;
        ButtonPlayAgain->Caption = "You won! Play again?";
        ButtonPlayAgain->Visible = true;
    }

    // Collision for brick 1.
    if (isCollisionOccurring(ImageBall, ImageBrick1) && ImageBrick1->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick1->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 2.
    if (isCollisionOccurring(ImageBall, ImageBrick2) && ImageBrick2->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick2->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 3.
    if (isCollisionOccurring(ImageBall, ImageBrick3) && ImageBrick3->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick3->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 4.
    if (isCollisionOccurring(ImageBall, ImageBrick4) && ImageBrick4->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick4->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 5.
    if (isCollisionOccurring(ImageBall, ImageBrick5) && ImageBrick5->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick5->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 6.
    if (isCollisionOccurring(ImageBall, ImageBrick6) && ImageBrick6->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick6->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 7.
    if (isCollisionOccurring(ImageBall, ImageBrick7) && ImageBrick7->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick7->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 8.
    if (isCollisionOccurring(ImageBall, ImageBrick8) && ImageBrick8->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick8->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 9.
    if (isCollisionOccurring(ImageBall, ImageBrick9) && ImageBrick9->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick9->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 10.
    if (isCollisionOccurring(ImageBall, ImageBrick10) && ImageBrick10->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick10->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 11.
    if (isCollisionOccurring(ImageBall, ImageBrick11) && ImageBrick11->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick11->Visible = false;
        remainingBricks--;
    }

    // Collision for brick 12.
    if (isCollisionOccurring(ImageBall, ImageBrick12) && ImageBrick12->Visible == true){
        xBall = -xBall;
        yBall = -yBall;
        ImageBrick12->Visible = false;
        remainingBricks--;
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
void __fastcall TForm1::ButtonPlayAgainClick(TObject *Sender)
{
    xBall = -8;
    yBall = 8;
    remainingBricks = 12;

    ImageBall->Left = 50;
    ImageBall->Top = 50;
    ImageBall->Visible = true;
    TimerBall->Enabled = true;
    ButtonPlayAgain->Visible = false;

    ImageBrick1->Visible = true;
    ImageBrick2->Visible = true;
    ImageBrick3->Visible = true;
    ImageBrick4->Visible = true;
    ImageBrick5->Visible = true;
    ImageBrick6->Visible = true;
    ImageBrick7->Visible = true;
    ImageBrick8->Visible = true;
    ImageBrick9->Visible = true;
    ImageBrick10->Visible = true;
    ImageBrick11->Visible = true;
    ImageBrick12->Visible = true;
}
//---------------------------------------------------------------------------
