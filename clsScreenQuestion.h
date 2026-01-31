#pragma once
#include <iostream>
#include"clsQustion.h"
#include"clsInputValidate.h"
#include"clsScreen.h"
#include<string>
#include<iomanip>
class clsScreenQuestion :protected clsScreen
{
private:
	static short _CountCorrectAnswer;
	static short _CountFalseAnswer;
	static void _PrintListQuestion(clsQustion Question) {

		cout << setw(30) << left <<""<< "*" << Question.GetQuestion() << endl;
		cout << setw(30) << left << "" << "[1]" << Question.GetArrAnswer(1) << endl;
		cout << setw(30) << left << "" << "[2]" << Question.GetArrAnswer(2) << endl;
		cout << setw(30) << left << "" << "[3]" << Question.GetArrAnswer(3) << endl;
		cout << setw(30) << left << "" << "[4]" << Question.GetArrAnswer(4) << endl;

	}
	static void _PrintResultOfQuestion(clsQustion Queastion, short num) {
		

		if (Queastion.IsCorrectAnswer(num)) {

			_CountCorrectAnswer++;

		}
		else {

			_CountFalseAnswer++;
		}
		cout << setw(30) << left << "" << "Many result Correct Answer : " << _CountCorrectAnswer << endl;
		cout << setw(30) << left << "" << "The Correct Answer   :" << Queastion.TheCorrectAnswer() << endl;
		cout << setw(30) << left << "" <<"Many result False  Answer : " << _CountFalseAnswer << endl;


	}
	static void _GotoNextQuestion() {

		cout << setw(30) << left << "" << "press Any Key To Go Next Question......";
		system("pause>0");
		system("cls");
	}
	static void _PrintLineFormat() {


		cout << setw(30) << left << "" << "=======================================================================\n";
	}
	static short _ReadNumberFromUser() {

		cout << setw(30) << left << "" << "Enter The Correct Answer : ";
		return clsInputValidate::ReadIntNumberBetween(1, 4, "Enter The Number Between 1-4:\t");

	}
	static void _ShowSingleQuestion(clsQustion &Question) {

		_PrintLineFormat();
		_PrintListQuestion(Question);
		_PrintLineFormat();

		short Num = _ReadNumberFromUser();
		_PrintLineFormat();
		_PrintResultOfQuestion(Question, Num);
		_PrintLineFormat();

	}
	static bool _IsCorrectMoreThanFals() {


		return (_CountCorrectAnswer > _CountFalseAnswer);
	}
	static void _IsSuccessOrField() {

	
		_IsCorrectMoreThanFals() ? system("color 27") : system("color 47");


	}
public:
	
	static void ShowQuestion(string NameOfFile,string Title) {

		vector<clsQustion>vQuestion = clsQustion::_LoadQuestionFromFile(NameOfFile);
		if (vQuestion.size() == 0) {

			cout << "Not Found Any Question ...  :-)";
			_GotoNextQuestion();
			return;
		}
		
		for (clsQustion& C : vQuestion) {
			
			string SubTitle = "\tNumber of Question(" + to_string(vQuestion.size()) + ")s";
			_DrawScreenHeader(Title,SubTitle);

			_ShowSingleQuestion(C);
			
			
			_GotoNextQuestion();

			_PrintLineFormat();
			
		}
		_IsSuccessOrField();

	}

};

short clsScreenQuestion::_CountCorrectAnswer = 0;
short clsScreenQuestion::_CountFalseAnswer = 0;