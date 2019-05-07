/*Kacper Kostecki, 300236, projekt III
prowadzący: Wiktor Kuśmirek
*/
#ifndef Section_HPP
#define Section_HPP
#include <iostream>
#include <vector>
#include <sstream>
#include "Trainer.hpp"
#include "Player.hpp"

template <typename T>
class Section{
	private:
		T revenues;
		std::string discipline;
		Trainer trainer;
		std::vector<Player> players;
	public:
		void setData();
		T inputSecurity();
		void showName();
		void show();
};

template<typename T>
void Section<T>::setData(){
	std::cout<<"Choose discipline of the section:";
	std::cin.ignore();
	getline(std::cin, discipline);
	std::cout<<"Current revenues: ";
	revenues = inputSecurity();
	trainer.setData();
	int menu = 0;
	do{
		std::cout<<"Type 1 to add new player"<<std::endl;
		std::cout<<"Type 2 to end adding."<<std::endl;
		std::cin>>menu;
		if(menu == 1){
			Player player;
			player.setData();
			players.push_back(player);
		}
		else if(menu != 2)
			std::cout<<"!!!Wrong number, pick again!!!"<<std::endl;
	}while(menu != 2);
}

template <typename T>
T Section<T>::inputSecurity(){
	bool temporary;
	std::string temp;
	do{
		temporary = true;
		std::cin>>temp;
		for(unsigned int i = 0; i < temp.length(); ++i)
			if((temp[i] < '0') || (temp[i] > '9')){
				if(i == 0 && temp[i] == '-')
					continue;
				std::cout<<"Wrong data input, do it again: ";
				temporary = false;
				break;
			}
	}while(!temporary);
	std::stringstream convert(temp);
	int result;
	convert >> result;
	return result;
}

template<typename T>
void Section<T>::showName(){
	std::cout<<discipline<<std::endl;
}

template<typename T>
void Section<T>::show(){
	std::cout<<"Discipline: "<<discipline<<std::endl;
	std::cout<<"Current revenues: "<<revenues<<std::endl;
	std::cout<<trainer;
	std::cout<<"Players: ";
	if(players.begin() == players.end())
		std::cout<<"Empty players' database."<<std::endl;
	std::cout<<std::endl;
	for(std::vector<Player>::iterator i = players.begin(); i != players.end(); ++i)
		std::cout<< *i <<std::endl;
}
#endif
