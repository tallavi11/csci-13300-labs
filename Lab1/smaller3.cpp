/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab1B

Write a program smaller3.cpp that asks the user to input three integer numbers, and prints out the smallest of the three.
*/

#include <iostream>

int smaller3(int x, int y, int z);


int main() {
	int num1;
	int num2;
	int num3;
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	std::cout << "Enter the third number: ";
	std::cin >> num3;
	std::cout << "\nThe smaller of the three is " << smaller3(num1, num2, num3) << std::endl;
	return 0;
}

int smaller3(int x, int y, int z){
	int w;
	if (x < y)
		{w = x;}
	else {w = y;}
	if (w < z)
		{return w;}
	else {return z;}
}
