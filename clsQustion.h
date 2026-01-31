#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include"clsUtil.h"
#include<string>
#include"clsString.h"
using namespace std;
class clsQustion
{
private:
	static clsQustion _ConvertLineToObject(string Line, string Delim = "#//#") {

		vector<string>sQuestion = clsString::Split(Line,Delim);
		
		return clsQustion(sQuestion[0], sQuestion[1], sQuestion[2], sQuestion[3], sQuestion[4],stoi( sQuestion[5]));

	}
	 string _Question;
	 string _ArrAnswer[4];
	 short _NumCorrectAnswer;
	


public:
	

	static vector<clsQustion>_LoadQuestionFromFile(string NameFile) {
		vector<clsQustion> vQuestion;
		
		fstream myfile;
		myfile.open(NameFile, ios::in);
		if (myfile.is_open()) {
			string Line;
			while (getline(myfile, Line)) {
			
				clsQustion oQuestion = _ConvertLineToObject(Line);

				vQuestion.push_back(oQuestion);



			}



			myfile.close();

		}

		return vQuestion;

	}
	  bool IsCorrectAnswer(short Num) {


		return (Num ==GetNumCorrectAnswer() );


	}
	

	clsQustion(string Question, string  FirstChoose, string SecondChoose, string ThirdChoose, string FourthChoose, short correctAnswer) {

		_Question = Question;
		_ArrAnswer[0] = FirstChoose;
		_ArrAnswer[1] = SecondChoose;
		_ArrAnswer[2] = ThirdChoose;
		_ArrAnswer[3] = FourthChoose;
		_NumCorrectAnswer = correctAnswer;
	}

	 string GetQuestion(){


		return _Question;
	}
	 
	 string GetArrAnswer(int index) {
		 
		
		return _ArrAnswer[index-1];
	}

	 short GetNumCorrectAnswer() {


		 return _NumCorrectAnswer;
	 }
	 string TheCorrectAnswer() {



		 return _ArrAnswer[_NumCorrectAnswer - 1];
	 }

	 
};

