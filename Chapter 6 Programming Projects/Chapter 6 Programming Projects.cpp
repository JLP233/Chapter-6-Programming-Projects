// Chapter 6 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program calculates final scoring for a performance based on 5 judge raw score inputs 0-10.

#include <iostream>


using namespace std;

//Function to get 5 judge scores
void GetRawScores( float & Score) 
{
	do {
		cout << "Enter judge's score (0 - 10):\n";
		cin >> Score;

		if (Score < 0 || Score > 10)
		{
			cout << "Invalid input. Score must be between 0 and 10.\n";
		}
		while (Score < 0 || Score > 10);
	}
}



