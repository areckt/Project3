/*Kacper Kostecki, 300236, projekt II
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include <cstdlib>
using namespace std;

Number::Number(){
	cout<<"Input number: ";
	cin>> hex >>value;
}

int operator+(Number first, Number second){
	return first.value+second.value;
}
int operator-(Number first, Number second){
	return first.value-second.value;
}
int operator*(Number first, Number second){
	return first.value*second.value;
}
int operator/(Number first, Number second){
	return first.value/second.value;
}
