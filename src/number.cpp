/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <sstream>
#include <cstdlib>
#include "Number.hpp"
using namespace std;

Number::Number(){
	value = inputSecurity();
}
int Number::inputSecurity(){
	cout<<"Input number: ";
	string temp;
	cin>>temp;
	for(unsigned int i = 0; i < temp.length(); ++i)
		if(((temp[i] < '0') || (temp[i] > '9')) && ((temp[i] < 'a') || (temp[i] > 'f')) && ((temp[i] < 'A') || (temp[i] > 'F'))){
			cout<<"Error: hexadecimal system syntax"<<endl;
			exit(1);
		}
	stringstream convert(temp);
	int result;
	convert >> hex >> result;
	return result;
}

int operator+(Number first, Number second){
	return first.value + second.value;
}
int operator-(Number first, Number second){
	return first.value - second.value;
}
int operator*(Number first, Number second){
	return first.value * second.value;
}
int operator/(Number first, Number second){
	if(second.value != 0)
		return first.value / second.value;
	else{
		cout<<"You cannot use 0 as second number"<<endl;
		exit(1);
	}
}
