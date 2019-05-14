/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 3
Student ID: 300199          Topic: Sports centre

PROJECT BASED ON A WORK BY KACPER KOSTECKI https://github.com/kkosteck/Project3
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
