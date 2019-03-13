/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <sstream>
#include <cstdlib>
#include "Number.hpp"
using namespace std;

inline Number::Number(){
	value = inputSecurity();
}
inline int Number::inputSecurity(){
	cout<<"Input number: ";
	string temp;
	cin>>temp;
	for(unsigned int i = 0; i < temp.length(); ++i)
		if((temp[i] >= '0' && temp[i] <= '9') || (temp[i] >= 'a' && temp[i] <= 'f') || (temp[i] >= 'A' && temp[i] <= 'F')){
			stringstream convert(temp);
			int result;
			convert >> hex >> result;
			return result;
		}
		else{
			cout<<"Error: hexadecimal system syntax"<<endl;
			exit(1);
		}
}

inline int operator+(Number first, Number second){
	return first.value + second.value;
}
inline int operator-(Number first, Number second){
	return first.value - second.value;
}
inline int operator*(Number first, Number second){
	return first.value * second.value;
}
inline int operator/(Number first, Number second){
	if(second.value != 0)
		return first.value / second.value;
	else{
		cout<<"You can not use 0 as second number"<<endl;
		exit(1);
	}
}
