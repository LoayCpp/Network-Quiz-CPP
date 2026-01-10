



#include <iostream>
using namespace std;
struct stStudent {
	short numberQuestion = 0;
	short correctchoice = 0;
	short wrongchoice = 0;


};
stStudent student;

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
void ChoiceCorrectAnsewr(short Answer,string CorrectAnswer) {
	short Choise = ReadNumber();
	if (Choise == Answer) {

		++student.correctchoice;
	}
	else {

		++student.wrongchoice;
		
	}

	PrintResultForStudent(CorrectAnswer);
	GoToNextQustion();

}
void QuestionNumberEight() {


	system("cls");
	cout << "================================================================================================\n";
	cout << space(4) << "Question (" << ++student.numberQuestion << ")" << "For Network\n";;
	cout << "================================================================================================\n";
	cout << space(2) << "\n\n**I-  Which technology protects your internet traffic by creating an encrypted tunnel and changing your IP address?:?\n\n";
	cout << space(2) << "\t[1] Firewall    \t [2]VPN \n";
	cout << space(2) << "\t[3]Proxy        \t [4] Gateway \n";
	ChoiceCorrectAnsewr(2, "VPN");

}
void QuestionNumberSeven() {


	system("cls");
	cout << "================================================================================================\n";
	cout << space(4) << "Question (" << ++student.numberQuestion << ")" << "For Network\n";;
	cout << "================================================================================================\n";
	cout << space(2) << "\n\n**H- hardware identifier that uniquely identifies each device on a network and is assigned by the manufacturer is the:?\n\n";
	cout << space(2) << "\t[1] IP Address    \t [2] MAC Address \n";
	cout << space(2) << "\t[3] Socket Address \t[4] Subnet Mask \n";
	ChoiceCorrectAnsewr(2, "MAC Address");
	QuestionNumberEight();
}
void QuestionNumberSix() {


	system("cls");
	cout << "================================================================================================\n";
	cout << space(4) << "Question (" << ++student.numberQuestion << ")" << "For Network\n";;
	cout << "================================================================================================\n";
	cout << space(2) << "\n\n**F- Which protocol automatically provides an IP address and other related configuration information to devices on a network?\n\n";
	cout << space(2) << "\t[1] DHCP  \t [2] DNS \n";
	cout << space(2) << "\t[3] NAT   \t [4] ISP \n";
	ChoiceCorrectAnsewr(1, "DHCP");
	QuestionNumberSeven();
}
void QuestionNumberFive() {


	system("cls");
	cout << "================================================================================================\n";
	cout << space(4) << "Question (" << ++student.numberQuestion << ")" << "For Network\n";;
	cout << "================================================================================================\n";
	cout << space(2) << "\n\n**E- Which protocol is responsible for assembling messages into smaller packets and reassembling them at the destination?\n\n";
	cout << space(2) << "\t[1] IP  \t [2] HTTP \n";
	cout << space(2) << "\t[3] TCP \t [4] FTP \n";
	ChoiceCorrectAnsewr(3, "TCP");
	QuestionNumberSix();
}
void QuestionNumberFour() {


	system("cls");
	cout << "================================================================================================\n";
	cout << space(4) << "Question (" << ++student.numberQuestion << ")" << "For Network\n";;
	cout << "================================================================================================\n";
	cout << space(2) << "\n\n**D- standard set of rules for how devices communicate through wires or wireless is called\n\n";
	cout << space(2) << "\t[1] Switch   \t [2] Router \n";
	cout << space(2) << "\t[3] Protocol \t [4] Port \n";
	ChoiceCorrectAnsewr(3, " Protocol");
	QuestionNumberFive();
}
void QuestionNumberThree() {


	system("cls");
	cout << "================================================================================================\n";
	cout << space(4) << "Question (" << ++student.numberQuestion << ")" << "For Network\n";;
	cout << "================================================================================================\n";
	cout << space(2) << "\n\n**C- What does the acronym (Wi - Fi) stand for??\n\n";
	cout << space(2) << "\t[1] Wireless Frequency  \t [2] Wired Fidelity\n";
	cout << space(2) << "\t[3] Wireless Fidelity   \t [4] Web Fidelity\n";
	ChoiceCorrectAnsewr(3, "Wireless Fidelity");
	QuestionNumberFour();

}
void QuestionNumberTwo() {

	system("cls");
	cout << "================================================================================================\n";
	cout << space(4) << "Question (" << ++student.numberQuestion << ")" << "For Network\n";;
	cout << "================================================================================================\n";
	cout << space(2) << "\n\n**B- Which type of network covers a small area like a home, school, or hospital?**?\n\n";
	cout << space(2) << "\t[1] WAN (Wide Area Network)         \t[2] LAN (Local Area Network)\n";
	cout << space(2) << "\t[3] MAN (Metropolitan Area Network) \t[4] VPN (Virtual Private Network)\n";
	ChoiceCorrectAnsewr(2, "LAN");
	QuestionNumberThree();

}
void QuestionNumberOne() {

	system("cls");
	cout << "================================================================================================\n";
	cout << space(4) << "Question (" << ++student.numberQuestion << ")" << "For Network\n";;
	cout << "================================================================================================\n";
	cout << space(2) << "\n\n**A- What is the term for a group of connected computers and devices?\n\n";
	cout << space(2) << "\t[1] Server  \t\t[2]Network\n";
	cout << space(2) << "\t[3] Protocol \t\t[4]Browser\n";
	ChoiceCorrectAnsewr(2,"Network");
	QuestionNumberTwo();
}
int main()
{
	QuestionNumberOne();
}

