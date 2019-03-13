/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <cstdlib>
#include "number.hpp"
using namespace std;

Calculator::Calculator(Number first, Number second){
	cout <<"Choose operation(+,-,*,/): ";
	cin >> operation;
	firstNum = first.value;
	secondNum = second.value;
	randomNum = rand();
	calculations(operation, first, second, randomNum);
}

Calculator::int calculations(char operation, Number firstNum, Number secondNum, int randomNum){
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
Calculator::void show(int randomNum, int result){
	cout<<"Result is: "<< hex << result <<" ";
	if(randomNum%2 == 0)
		cout<<"and it is true"<<endl;
	else
		cout<<"and it is false"<<endl;
}
Calculator::void show(int result){
	cout<<"Result is: "<< hex << result<<endl;
}
