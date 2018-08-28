/*
Author: Syed Hussain
Course: CSCI-136
Instructor: their name
Assignment: Lab1A Task A

This program takes 2 numbers and outputs the smallest integer.
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
	if (n1<n2)
		cout << n1;
	else
		cout << n2;
}
