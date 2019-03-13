/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <cstdlib>
#include "Number.cpp"
#include "Number.hpp"
#include "Calculator.hpp"
using namespace std;

Calculator::Calculator(Number first, Number second){
	cout <<"Choose operation(+,-,*,/): ";
	cin >> operation;
	randomNum = rand();
	result = calculations(operation, first, second, randomNum);
}

int Calculator::calculations(int operation, Number firstNum, Number secondNum, int randomNum){
	if(randomNum%2 == 0)
		if(operation == '+')
			return firstNum + secondNum;
		else if(operation == '-')
			return firstNum - secondNum;
		else if(operation == '*')
			return firstNum * secondNum;
		else if(operation == '/')
			if(secondNum.value != 0)
				return firstNum / secondNum;
			else{
				cout<<"You can not use 0 as second number"<<endl;
				exit(1);
			}
		else{
			cout<<"Error: Invalid operation sign"<<endl;
			exit(1);
		}
	else
		return rand();
	
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
