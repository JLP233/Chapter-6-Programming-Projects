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
	}
	while (Score < 0 || Score > 10);
	
}

//Function to find highest score
float FindHighestScore(float S1, float S2, float S3, float S4, float S5)
{
	float Highest = S1;
	if (S2 > Highest) Highest = S2;
	if (S3 > Highest) Highest = S3;
	if (S4 > Highest) Highest = S4;
	if (S5 > Highest) Highest = S5;
	return Highest;
}

//Fucntion to find lowest score
float FindLowestScore(float S1, float S2, float S3, float S4, float S5)
{
	float Lowest  = S1;
	if (S2 < Lowest) Lowest = S2; 
	if (S3 < Lowest) Lowest = S3; 
	if (S4 < Lowest) Lowest = S4; 
	if (S5 < Lowest) Lowest = S5; 
	return Lowest; 
}

//Function to drop highest and lowest then average middle three scores
float CalcFinalScore(float S1, float S2, float S3, float S4, float S5)
{
	float Lowest = FindLowestScore(S1, S2, S3, S4, S5);
	float Highest = FindHighestScore(S1, S2, S3, S4, S5);
	float FinalScore = (S1 + S2 + S3 + S4 + S5) - Lowest - Highest;
	return FinalScore / 3;
}

//Function to display score
void DisplayScore(float AverageScore) 
{
	cout << "Final Calculated Average Score: " << AverageScore << endl;
}

int main()
{
	float S1, S2, S3, S4, S5;

	GetRawScores(S1);
	GetRawScores(S2);
	GetRawScores(S3);
	GetRawScores(S4);
	GetRawScores(S5);

	float AverageScore = CalcFinalScore(S1, S2, S3, S4, S5);
	DisplayScore(AverageScore);

	return 0;
}
