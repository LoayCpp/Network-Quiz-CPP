

/*
	Network Quiz Console Application
	Author: Loay Alarify
	LinkedIn:https://www.linkedin.com/in/loay-anwar-alarify-259634260
	GitHub: https://github.com/LoayCpp
*/


#include <iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
struct stStudent {
	short numberQuestion = 0;
	short correctchoice = 0;
	short wrongchoice = 0;


};
struct  stQuestion
{
	string TextQuestion;
	string choiseAnswer[4];
	short CorrectchoiseAnswer;
};

stStudent student;
const string File = "QustionsNetwork.txt";



vector <string> split(string name, string delim = "#//#") {
	vector<string> Vword;
	short pos = 0;
	string s = "";
	while ((pos = name.find(delim)) != std::string::npos) {

		s = name.substr(0, pos);
		if (s != "") {

			Vword.push_back(s);

		}

		name = name.erase(0, pos + delim.length());


	}
	if (name != "") {


		Vword.push_back(name);
	}


	return Vword;


}
stQuestion ConvertFromLineQuestionToStructQuestion(string name, string delim = "#//#") {
	stQuestion Ques;
	vector<string>Vquestions = split(name, delim);
	Ques.TextQuestion = Vquestions[0];
	Ques.choiseAnswer[0] = Vquestions[1];
	Ques.choiseAnswer[1] = Vquestions[2];
	Ques.choiseAnswer[2] = Vquestions[3];
	Ques.choiseAnswer[3] = Vquestions[4];
	Ques.CorrectchoiseAnswer = stoi(Vquestions[5]);


	return Ques;

}
vector<stQuestion> LoadFromQuestionFile(string file) {
	vector<stQuestion>Vquestions;
	fstream myfile;
	string line;
	stQuestion Ques;

	myfile.open(file, ios::in);
	if (myfile.is_open()) {


		while (getline(myfile, line)) {

			Ques = ConvertFromLineQuestionToStructQuestion(line);
			Vquestions.push_back(Ques);


		}



		myfile.close();

	}





	return Vquestions;

}

string space(short num) {
	string s = "";
	for (short i = 0; i <= num; i++)
	{
		s += "\t";
	}

	return s;
}
void GoToNextQustion() {

	cout << "\n\n\nEnter Any Key To Go Next Question ...\n";
	system("pause>0");


}
short ReadNumber() {
	short num;
	do {
		cout << "Enter The Number From [1] - [4] :\t";
		cin >> num;
	} while (num < 1 || num>4);

	return num;
}
void PrintResultForStudent(string CorrectAnswer) {
	cout << "-------------------------------------------------------------\n";
	cout << "\n\nThe Number of successes :" << student.correctchoice << "\n";
	cout << "The Correct Answer Is   :" << CorrectAnswer << "\n";
	cout << "The Number of failures  :" << student.wrongchoice << "\n";
	cout << "\n\n-------------------------------------------------------------\n";

}
void ChoiceCorrectAnsewr(stQuestion Ques) {
	short Choise = ReadNumber();
	if (Choise == Ques.CorrectchoiseAnswer) {

		++student.correctchoice;
	}
	else {

		++student.wrongchoice;

	}

	PrintResultForStudent(Ques.choiseAnswer[Ques.CorrectchoiseAnswer - 1]);
	GoToNextQustion();

}


void PrintAllQuestions(stQuestion Q) {

	system("cls");
	cout << "================================================================================================\n";
	cout << space(4) << "Question (" << ++student.numberQuestion << ")" << "For Network\n";;
	cout << "================================================================================================\n";
	cout << space(2) << "\n\n" << Q.TextQuestion << endl;
	for (short i = 0; i < 4; i++) {
		cout << "[" << i + 1 << "]" << Q.choiseAnswer[i] << space(2) << "\n";
	}
	ChoiceCorrectAnsewr(Q);


}

void start() {
	vector<stQuestion>Vques = LoadFromQuestionFile(File);
	for (stQuestion& Q : Vques)
	{
		PrintAllQuestions(Q);
	}


}
int main()
{
	start();
}

