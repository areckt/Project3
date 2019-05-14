/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 3
Student ID: 300199          Topic: Sports centre

PROJECT BASED ON A WORK BY KACPER KOSTECKI https://github.com/kkosteck/Project3
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
