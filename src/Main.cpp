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

	int result = calculate.calculations(firstNum, secondNum);
	if(calculate.resultShow())
		calculate.show(calculate,result);
	else
		calculate.show(result);
}
