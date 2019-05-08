/*Kacper Kostecki, 300236, projekt III
prowadzący: Wiktor Kuśmirek
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
