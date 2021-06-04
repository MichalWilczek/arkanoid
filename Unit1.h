//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *ShapeBackground;
        TImage *ImageBall;
        TTimer *TimerBall;
        TImage *ImagePaddle;
        TTimer *TimerPaddleLeft;
        TTimer *TimerPaddleRight;
        TImage *ImageBrick1;
        TImage *ImageBrick2;
        TImage *ImageBrick3;
        TImage *ImageBrick4;
        TImage *ImageBrick5;
        TImage *ImageBrick6;
        TImage *ImageBrick7;
        TImage *ImageBrick8;
        TImage *ImageBrick9;
        TImage *ImageBrick10;
        TImage *ImageBrick12;
        TImage *ImageBrick11;
        TButton *ButtonPlayAgain;
        void __fastcall TimerBallTimer(TObject *Sender);
        void __fastcall TimerPaddleLeftTimer(TObject *Sender);
        void __fastcall TimerPaddleRightTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall ButtonPlayAgainClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
