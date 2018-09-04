/*
Author: Syed Hussain
Course: CSCI-136
Instructor: Gwenael Gatto
Assignment: Lab

This program takes an inputted diameter and returns a difference in growth where you add 1 to the given diameter
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float diameter;
	float growth;
	const double PI = 3.141592653589793;
	cout << "Enter diameter"<< endl;
	cin >> diameter;

	int volume1 = PI * diameter * diameter * diameter / 6;
	diameter++;
	int volume2 = PI * diameter * diameter * diameter / 6;
	growth = volume2 - volume1;
	cout << growth << endl;
	diameter++;
	int volume3 = PI * diameter * diameter * diameter / 6;
	growth = volume3 - volume2;
	cout << growth << endl;
}
