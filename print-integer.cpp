/*
Author: Syed Hussain
Course: CSCI-136
Instructor: Gwenael Gatto
Assignment: Lab 2A

this program takes a lower and upper limit and returns all integers inbetween
*/

#include <iostream>

using namespace std;

int main(){
	int L;
	cout << "Please enter L: ";
	cin >> L;
	int U;
	cout << "Please enter U: ";
	cin >> U;
	for(int i = L; i < U; i++){
		cout << i << " ";
	}
}
