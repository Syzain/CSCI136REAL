/*
Author: Syed Hussain
Course: CSCI-136
Instructor: Gwenael Gatto
Assignment: Lab 2A

this program takes an integer between 0 and 100 and returns the number squared
*/

#include <iostream>

using namespace std;

int main(){
	int integer;
	cout << "Please enter an integer: ";
	cin >> integer;
	while(integer < 0 || integer > 100){
		cout << "Please enter an integer: ";
		cin >> integer;
	}
	cout << "Number squared is: " << endl;
}
