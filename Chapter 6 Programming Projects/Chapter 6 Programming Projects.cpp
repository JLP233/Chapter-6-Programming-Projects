// Chapter 6 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program calculates and displays the area and perimeter of a rectangle based on user input of side lengths.

#include <iostream>

using namespace std;

int main()
{
	float RectangleLength;
	float RectangleWidth;
	float RectangleArea;
	float RectanglePerimeter;
	int UserChoice;

	do {

		//Request User inputs for length and width
		cout << "Input Rectangle Length:\n";
		cin >> RectangleLength;

		cout << "Input Rectangle Width:\n";
		cin >> RectangleWidth;

		//Input validation
		if (RectangleLength < 0 || RectangleWidth < 0)
		{
			cout << "Input Invalid. Values must be greater than zero.\n";
		}

		//Area and Perimeter Calculation
		else
		{
			RectangleArea = RectangleLength * RectangleWidth;
			cout << "The area of the rectangle is: " << RectangleArea << endl;
			RectanglePerimeter = (2 * RectangleLength) + (2 * RectangleWidth);
			cout << "The perimeter of the rectangle is: " << RectanglePerimeter << endl;
		}

		//Process another rectangle or quit
		cout << "Enter 1 to process another rectangle. Enter any other value to quit." << endl;

		cin >> UserChoice;

	}  while (UserChoice == 1);

	cout << "Goodbye." << endl;

	return 0;
}
