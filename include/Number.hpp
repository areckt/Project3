/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#ifndef number_hpp
#define number_hpp

#include "Calculator.hpp"

class Number{
	private:
		int value;
	public:
		Number();
		
	friend class Calculator;
	friend int operator+(Number, Number);
	friend int operator-(Number, Number);
	friend int operator*(Number, Number);
	friend int operator/(Number, Number);
};

int operator+(Number, Number);
int operator-(Number, Number);
int operator*(Number, Number);
int operator/(Number, Number);
#endif
