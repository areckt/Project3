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
		int inputSecurity();
	friend int operator+(Number, Number);
	friend int operator-(Number, Number);
	friend int operator*(Number, Number);
	friend int operator/(Number, Number);
};

#endif
