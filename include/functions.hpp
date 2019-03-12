#ifndef functions_hpp
#define functions_hpp

class Number{
	public:
		int value;
		Number();
};
int operator+(Number first, Number second);
	
int operator-(Number first, Number second);
	
int operator*(Number first, Number second);
	
int operator/(Number first, Number second);
	
int calculations(char operation, Number firstNum, Number secondNum, int randomNum);

void show(int randomNum, int result);

void show(int result);
#endif