/*Kacper Kostecki, 300236, projekt III
prowadzący: Wiktor Kuśmirek
*/
#ifndef Trainer_HPP
#define Trainer_HPP

class Trainer{
		std::string name;
		std::string surname;
		int age;
	public:
		void setData();
		friend std::ostream & operator<< (std::ostream &output, const Trainer &t);
};

#endif
