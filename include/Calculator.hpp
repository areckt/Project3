/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#ifndef Calculator_HPP
#define Calculator_HPP
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
