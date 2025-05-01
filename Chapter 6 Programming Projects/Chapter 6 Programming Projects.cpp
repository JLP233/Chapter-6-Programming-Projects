// Chapter 6 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program displays a conversion chart for Fahrenheit to Celsius temperatures.

#include <iostream>
#include <iomanip>

using namespace std;

// F to C Function
float ConversionToCelsius(int Fahrenheit)
{
	return (5.0 / 9.0) * (Fahrenheit - 32);
}

//Display table function
void DisplayCTable() {
	cout << "Fahrenheit to Celsius" << endl;
	for (int FTemp = 0; FTemp <= 20; FTemp++)
	{
		float Celsius = ConversionToCelsius(FTemp);
		cout << FTemp << " = " << Celsius << endl;
	}
}

int main() {
	DisplayCTable();
	return 0;
}

