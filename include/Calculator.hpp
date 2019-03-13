/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#ifndef functions_hpp
#define functions_hpp

#include "Number.hpp"

class Calculator{
	private:
		int randomNum;
		char operation;
	public:
		Calculator(Number first, Number second);
		int calculations(Number, Number);
		bool resultShow();
		void show(Calculator, int);
		void show(int);
};

#endif
