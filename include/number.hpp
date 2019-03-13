/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#ifndef number_hpp
#define number_hpp

class Number{
	private:
		int value;
	public:
		Number();
};

int operator+(Number, Number);
int operator-(Number, Number);
int operator*(Number, Number);
int operator/(Number, Number);
#endif
