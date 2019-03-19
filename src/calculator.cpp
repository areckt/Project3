/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <cstdlib>
#include "Number.cpp"
#include "Number.hpp"
/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include "Calculator.hpp"
#include "Number.hpp"
using namespace std;

Calculator::Calculator(Number first, Number second){
	cout <<"Choose operation(+,-,*,/): ";
	cin >> operation;
	randomNum = rand();
}

int Calculator::calculations(Number firstNum, Number secondNum){
	if(randomNum%2 == 0)
		if(operation == '+')
			return firstNum + secondNum;
		else if(operation == '-')
			return firstNum - secondNum;
		else if(operation == '*')
			return firstNum * secondNum;
		else if(operation == '/')
			return firstNum / secondNum;
		else{
			cout<<"Error: Invalid operation sign"<<endl;
			exit(1);
		}
	else
		return rand();
	
}	

bool Calculator::resultShow(){
	cout<<"Do you want to know the result is true or false? (y/n)";
	char YesOrNo;
	cin>>YesOrNo;
	if(YesOrNo == 'y')
		return true;
	return false;
}

void Calculator::show(Calculator calculate, int result){
	cout<<"Result is: "<< hex << result <<" ";
	if(calculate.randomNum%2 == 0)
		cout<<"and it is true"<<endl;
	else
		cout<<"and it is false"<<endl;
}
void Calculator::show(int result){
	cout<<"Result is: "<< hex << result<<endl;
}
