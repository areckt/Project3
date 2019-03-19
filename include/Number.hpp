/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#ifndef Number_HPP
#define Number_HPP

class Number{
	private:
		int value;
	public:
		Number(void);
		int inputSecurity(void);
		friend int operator+(Number, Number);
		friend int operator-(Number, Number);
		friend int operator*(Number, Number);
		friend int operator/(Number, Number);
};

#endif
