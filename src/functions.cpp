/*Kacper Kostecki, 300236, projekt III
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <sstream>
using namespace std;

void inputSecurity(string& input){
	bool temporary;
	do{
		temporary = true;
		cin>>input;
		for(unsigned int i = 0; i < input.length(); ++i)
			if((input[i] < 'A' || input[i] > 'Z') && (input[i] < 'a' || input[i] > 'z')){
				cout<<"Wrong data input, do it again: ";
				temporary = false;
				break;
			}
	}while(!temporary);
}

int inputSecurity(){
	bool temporary;
	string temp;
	do{
		temporary = true;
		cin>>temp;
		for(unsigned int i = 0; i < temp.length(); ++i)
			if((temp[i] < '0') || (temp[i] > '9')){
				cout<<"Wrong data input, do it again: ";
				temporary = false;
				break;
			}
	}while(!temporary);
	stringstream convert(temp);
	int result;
	convert >> result;
	return result;
}
