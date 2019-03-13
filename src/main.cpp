/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <cstdlib>
#include "functions.hpp"
using namespace std;

int main(){
	srand(time(NULL));
	Number firstNum, secondNum;
	
	char operation;
	cout <<"Choose operation(+,-,*,/): ";
	cin >> operation;
	int randomNum = rand();
	int result = calculations(operation, firstNum, secondNum, randomNum);
	cout<<"Do you want to know the result is true or false? (t/f)";
	char trueOrFalse;
	cin>>trueOrFalse;
	if(trueOrFalse == 't')
		show(randomNum,result);
	else
		show(result);
}
