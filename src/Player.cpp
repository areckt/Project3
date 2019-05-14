/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 3
Student ID: 300199          Topic: Sports centre

PROJECT BASED ON A WORK BY KACPER KOSTECKI https://github.com/kkosteck/Project3
*/

#include <iostream>
#include "functions.hpp"
#include "Player.hpp"
using namespace std;

void Player::setData(){
	cout<<"Player's: ";
	cout<<"name: ";
	inputSecurity(name);
	cout<<"surname: ";
	inputSecurity(surname);
	cout<<"age: ";
	age = inputSecurity();
	cout<<"former club: ";
	cin.ignore();
	getline(cin, formerClub);
	cout<<"years of activity: ";
	activityYears = inputSecurity();
}

ostream & operator<< (ostream &output, const Player &p){
	output<<"\tName: "<< p.name <<endl;
	output<<"\tSurname: "<< p.surname <<endl;
	output<<"\tAge: "<<p.age<<endl;
	output<<"\tFormer club: "<<p.formerClub<<endl;
	output<<"\tYears of activity: "<<p.activityYears<<endl;
	return output;
}
