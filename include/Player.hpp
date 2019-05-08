/*Kacper Kostecki, 300236, projekt III
prowadzący: Wiktor Kuśmirek
*/
#ifndef Player_HPP
#define Player_HPP

class Player{
	private:
		std::string name;
		std::string surname;
		std::string formerClub;
		int age;
		int activityYears;
	public:
		void setData();
		friend std::ostream & operator<< (std::ostream &output, const Player &p);
		
};

#endif
