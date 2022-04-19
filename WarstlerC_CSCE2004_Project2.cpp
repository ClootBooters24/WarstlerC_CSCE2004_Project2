// WarstlerC_CSCE2004_Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Program should print a sequence of menus and let the user select one food item,
//one drink option, and one size option.
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	double combo, drink, size;
	double priceTotal = 0;
	double comboPrice = 0;
	double sizePrice = 0;

	string combo1 = "Dave's Single Combo";
	cout << combo1 << endl;
	cout << "Welcome to Wendy's Express lane\n\n";
	cout << "Please select one of the meals below:\n" 
		"1) Dave's Single Combo ($6.50)\n" 
		"2) 10 Piece Nuggets Combo($7.00)\n" 
		"3) Classic Chicken Sandwich Combo($7.50)\n" 
		"4) Baconator Combo($8.00)\n" 
		"5) Bourbon Bacon Cheeseburger Combo($8.50)\n" <<
		"Your selection: ";
	cin >> combo;
	
	//If loop sets the combo price
	//If variable is not within the threshold, exits the program.
	if (combo == 1)
		comboPrice = 6.5;
	if (combo == 2)
		comboPrice = 7;
	if (combo == 3)
		comboPrice = 7.5;
	if (combo == 4)
		comboPrice = 8;
	if (combo == 5)
		comboPrice = 8.5;
	else if (combo < 1 || combo > 5)
		return 0;

	cout << "\nPlease select one of the drinks below: \n"
		"1) Coke\n"
		"2) Diet Coke\n"
		"3) Mountain Dew\n"
		"4) Sweet Iced Tea\n"
		"Your selection: ";
	cin >> drink;

	if (drink < 1 || drink > 4)
		return 0;

	cout << "\nWhat size would you like? \n"
		"1) Small(+$0.00)\n"
		"2) Medium(+$0.50)\n"
		"3) Large(+$1.00)\n"
		"Your selection: \n";
	cin >> size;

	if (size == 1)
		sizePrice = 0;
	else if (size == 2)
		sizePrice = 0.5;
	else if (size == 3)
		sizePrice = 1;
	else if(size < 1 || size > 3)
		return 0;

	priceTotal = (sizePrice + comboPrice) * 0.05 + (sizePrice + comboPrice);

	cout << setprecision(3); 
	cout << "Thank you for placing your order!\n Your total is: $" << priceTotal;
}