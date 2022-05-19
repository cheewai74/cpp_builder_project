//---------------------------------------------------------------------------

#include <fmx.h>
#include <queue>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

class Question{
	public:
		char* Text;
		char* Answer1;
		char* Answer2;
		char* Answer3;
		int CorrectAnswer;

		Question(){}
		Question(char* text, char* ans1, char* ans2, char* ans3, int correctAns){
			Text = text;
			Answer1 = ans1;
			Answer2 = ans2;
			Answer3 = ans3;
			CorrectAnswer = correctAns;
		}

};

std::queue<Question> LoadQuestion(){

	Question q1 = Question("Which color does not appear on the Olympic rings?", "Black", "Orange","Green",2);
	Question q2 = Question("What is the chemical formula for Table Salt?","NaCI","NaCI2","Na2CI",1) ;
	Question q3 = Question("What is the longest river in the world?","Nile", "Mississippi","Amazon",1);

	std::queue<Question> questions;
	questions.push(q1);
	questions.push(q2);
	questions.push(q3);

    return questions;

}

std::queue<Question> questions;
Question currentQuestion;
int selectedAnswer;
int points = 0;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	questions=LoadQuestion();
	currentQuestion=questions.front();

	lblQuestionLabel->Text = currentQuestion.Text;
	rdbAnswer1->Text= currentQuestion.Answer1;
	rdbAnswer2->Text= currentQuestion.Answer2;
	rdbAnswer3->Text= currentQuestion.Answer3;

	questions.pop();
	lblPointsLabel->Text=points;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::rdbAnswer1Change(TObject *Sender)
{
   selectedAnswer=1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::rdbAnswer2Change(TObject *Sender)
{
   selectedAnswer=2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::rdbAnswer3Change(TObject *Sender)
{
	selectedAnswer=3;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnConfirmClick(TObject *Sender)
{
	if(selectedAnswer==currentQuestion.CorrectAnswer){
		points++;
		lblPointsLabel->Text= points;
	}

	if(!questions.empty()){

		currentQuestion=questions.front();

    	lblQuestionLabel->Text = currentQuestion.Text;
		rdbAnswer1->Text= currentQuestion.Answer1;
		rdbAnswer2->Text= currentQuestion.Answer2;
		rdbAnswer3->Text= currentQuestion.Answer3;

		questions.pop();
		rdbAnswer1->IsChecked = false;
		rdbAnswer2->IsChecked = false;
		rdbAnswer3->IsChecked = false;

	}
	else{
		btnConfirm->Enabled=false;
        btnConfirm->Text="Game Over";
    }
}
//---------------------------------------------------------------------------
