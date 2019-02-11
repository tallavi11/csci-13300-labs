/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab1A

Write a program smaller.cpp that asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>

int smaller(int a, int b);

int main() {
	int num1;
	int num2;
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	std::cout << "\nThe smaller of the two is " << smaller(num1, num2) << std::endl;
}


int smaller(int a, int b) {
	if (a < b)
		{return a;}
	else
		{return b;}
}
