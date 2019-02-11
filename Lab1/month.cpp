/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab1D

*/

#include <iostream>

int month(int y, int m);

int main() {
	int year;
	int mon;
	int answer;
	std::cout << "Enter year: ";
	std::cin >> year;
	std::cout << "Enter month: ";
	std::cin >> mon;
	answer = month(year, mon);
	std::cout << "\n" << answer << " days" << std::endl;
}

int month(int y, int m){
	bool year;
	//false year means common year true year means leap year
	
	if (y%4 != 0)
		{year = false;}
	else if (y%100 != 0)
		{year = true;}
	else if (y%400 != 0)
		{year = false;}
	else {year = true;}

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{return 31;}
	if (m == 4 || m == 6 || m == 9 || m == 11)
		{return 30;}
	if (m == 2)
		{if (year == true)
			{return 29;}
		if (year == false)
			{return 28;}
		}
	return 0;
}
