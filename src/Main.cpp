/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <cstdlib>
#include "Calculator.hpp"
#include "Number.hpp"
using namespace std;

int main(){
	srand(time(NULL));
	Number firstNum, secondNum;
	Calculator calculate(firstNum, secondNum);

	cout<<"Do you want to know the result is true or false? (y/n)";
	char YesOrNo;
	cin>>YesOrNo;
	if(YesOrNo == 'y')
		calculate.show(calculate,result);
	else
		calculate.show(result);
}
