/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <cstdlib>
#include "functions.hpp"
using namespace std;

Number::Number(){
	cout<<"Input number: ";
	cin>> hex >>value;
}

int operator+(Number first, Number second){
		return first.value+second.value;
}
int operator-(Number first, Number second){
		return first.value-second.value;
}
int operator*(Number first, Number second){
		return first.value*second.value;
}
int operator/(Number first, Number second){
		return first.value/second.value;
}

int calculations(char operation, Number firstNum, Number secondNum, int randomNum){
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
void show(int randomNum, int result){
	cout<<"Result is: "<< hex << result <<" ";
	if(randomNum%2 == 0)
		cout<<"and it is true"<<endl;
	else
		cout<<"and it is false"<<endl;
}
void show(int result){
	cout<<"Result is: "<< hex << result<<endl;
}
