/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#ifndef functions_hpp
#define functions_hpp

class Calculator{
	private:
		int randomNum;
		int firstNum;
		int secondNum;
		int operation;
		int result;
	public:
		Calculator(Number, Number);
		int calculations(char, Number, Number, int);
		void show(int, int);
		void show(int);
};

#endif
