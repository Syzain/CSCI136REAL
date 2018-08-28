/*
Author: Syed Hussain
Course: CSCI-136
Instructor: their name
Assignment: Lab1A Task B

This program takes 3 numbers and outputs the smallest integer.
*/
#include <iostream>
using namespace std;

int main(){
	int n1 = 0;
	cout << "Enter first number ";
	cin >> n1;
	int n2 = 0;
	cout << "Enter second number ";
	cin >> n2;
//fresh copy and paste
	int n3 = 0;
	cout << "Enter third number ";
	cin >> n3;
//intellectual use of if-else
	if (n1<n2 && n1<n3)
		cout << n1;
	else if (n2<n3)
		cout << n2;
	else
		cout << n3
		
}
