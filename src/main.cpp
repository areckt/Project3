/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <cstdlib>
#include "calculator.hpp"
#include "number.hpp"
using namespace std;

int main(){
	srand(time(NULL));
	Number firstNum, secondNum;
	Calculator calculate;

	int result = calculate.calculations(operation, firstNum, secondNum, randomNum);
	cout<<"Do you want to know the result is true or false? (y/n)";
	char YesOrNo;
	cin>>YesOrNo;
	if(YesOrNo == 'y')
		show(calculate.randomNum,result);
	else
		show(result);
}
