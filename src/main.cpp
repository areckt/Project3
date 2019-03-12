#include <iostream>
#include <cstdlib>
using namespace std;

class Numbers{
	public:
		int firstNum;
		int secondNum;
		Numbers(string firstInput, string secondInput);
		string operator+(int firstNum, int secondNum);
};

string operator+(int firstNum, int secondNum){
		
}

Numbers::Numbers(string firstInput, string secondInput){
	cout<<"Input first number: ";
	cin>>firstInput;
	cout<<"Input second number: ";
	cin>>secondInput;
	firstNum = strtol(&firstInput[0], NULL, 16);
	secondNum = strtol(&secondInput[0], NULL, 16);
}


int main(){
	string firstInput, secondInput;
	char operation;
	Numbers input(firstInput, secondInput);
	cout<<"Choose operation (+, -, /, *): ";
	cin>>operation;
}
