



#include <iostream>
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

stQuestion Question[] = {
	{"A- What is the term for a group of connected computers and devices?",
{"Server","Network","Protocol","Browser"},
2
},
	{ "B-Which type of network covers a small area like a home, school, or hospital ? **",  
	{"WAN", "LAN", "MAN", "VPN"},
2
},
	{"C- What does the acronym (Wi-Fi) stand for?",
	{"Wireless Frequency", "Wired Fidelity", "Wireless Fidelity", "Web Fidelity"}
	,3
},
	{"D- Standard set of rules for how devices communicate through wires or wireless is called?",
	{"Switch", "Router", "Protocol", "Port"},
	3
},
	 
	{"E- Which protocol is responsible for assembling messages into smaller packets and reassembling them at the destination?",
		{"IP", "HTTP", "TCP", "FTP"},
		3
	},    {
		"F- Which protocol automatically provides an IP address and other configuration information to devices on a network?",
		{"DHCP", "DNS", "NAT", "ISP"},
		1
	},
	{
		"H- Hardware identifier that uniquely identifies each device on a network and is assigned by the manufacturer is the?",
		{"IP Address", "MAC Address", "Socket Address", "Subnet Mask"},
		2
	},
	{
		"I- Which technology protects your internet traffic by creating an encrypted tunnel and changing your IP address?",
		{"Firewall", "VPN", "Proxy", "Gateway"},
		2
	}
};

	




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
	cout<<"\n\nThe Number of successes :" << student.correctchoice << "\n";
	cout <<"The Correct Answer Is   :" << CorrectAnswer << "\n";
	cout <<"The Number of failures  :" << student.wrongchoice << "\n";
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

	PrintResultForStudent(Ques.choiseAnswer[Ques.CorrectchoiseAnswer-1]);
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


int main()
{
	for (short i = 0; i < 8; i++) {

		PrintAllQuestions(Question[i]);
}
}

