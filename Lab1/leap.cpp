/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab1C

Write a program leap.cpp that asks the user to input an integer representing a year number (1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.
*/

#include <iostream>

std::string leap(int y);

int main() {
	int year;
	std::cout << "Enter year: ";
	std::cin >> year;
	std::cout << "\n" << leap(year) << std::endl;
}

std::string leap(int y){
	std::string year;
	if (y%4 != 0)
		{year = "Common year";}
	else if (y%100 != 0)
		{year = "Leap year";}
	else if (y%400 != 0)
		{year = "Common year";}
	else {year = "Leap year";}
	return year;
}
