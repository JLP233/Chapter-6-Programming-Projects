// Chapter 6 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program determines which geographic regions within a major city  had the fewest reported automobile accidents last year.

#include <iostream>
#include <string>

using namespace std;

int GetAccidents(string);
void FindLowest(int North, int South, int East, int West, int Central);

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

int GetAccidents(string RegionName) {
    int Accidents;

    do {
        cout << RegionName << " region: ";
        cin >> Accidents;

        if (Accidents < 0) {
            cout << "Invalid input. Number of accidents must be a whole and positve number.\n";
        }

    } while (Accidents < 0);

    return Accidents;
}

void FindLowest(int North, int South, int East, int West, int Central) 
{
    string Region = "North";
    int Lowest = North;

    if (South < Lowest) {
        Lowest = South;
        Region = "South";
    }
    if (East < Lowest) {
        Lowest = East; 
        Region = "East"; 
    }
    if (West < Lowest) {
        Lowest = West;
        Region = "West";
    }
    if (Central < Lowest) {
        Lowest = Central;
        Region = "Central";
    }

    cout << "Region with the fewest reported accidents last year was:\n"
        << Region;
}