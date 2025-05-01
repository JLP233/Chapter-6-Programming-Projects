// Chapter 6 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program determines which geographic regions within a major city  had the fewest reported automobile accidents last year.

#include <iostream>
#include <string>

using namespace std;

int GetAccidents(string);
void FindLowest(int north, int south, int east, int west, int central);

int main()
{
    int North, South, East, West, Central;

    cout << "Enter the number of automobile accidents for each region last year:\n";

    North = GetAccidents("North");
    South = GetAccidents("South");
    East = GetAccidents("East");
    West = GetAccidents("West");
    Central = GetAccidents("Central");

    FindLowest(North, South, East, West, Central); 

    return 0;
}
