/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 3
Student ID: 300199          Topic: Sports centre

PROJECT BASED ON A WORK BY KACPER KOSTECKI https://github.com/kkosteck/Project3
*/

#include <iostream>
#include "functions.hpp"
#include "Trainer.hpp"
using namespace std;

void Trainer::setData(){
	cout<<"Trainer's: "<<endl;
	cout<<"name: ";
	inputSecurity(name);
	cout<<"surname: ";
	inputSecurity(surname);
	cout<<"age: ";
	age = inputSecurity();
}

ostream & operator<< (ostream &output, const Trainer &t){
	output<<"Trainer: "<<endl;
	output<<"\tName: "<< t.name <<endl;
	output<<"\tSurname: "<< t.surname <<endl;
	output<<"\tAge: "<<t.age<<endl;
	return output;
}
