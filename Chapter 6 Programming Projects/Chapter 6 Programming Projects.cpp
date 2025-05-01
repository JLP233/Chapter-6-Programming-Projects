// Chapter 6 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program calculates and displays the labor and paint costs of a painting job based on number of rooms, paint, and labor costs.

#include <iostream>


using namespace std;

//User input and validate number of rooms
int GetNumberOfRooms() {
    int Rooms; 
    do {
        cout << "Enter the number of rooms to be painted (1 room minimum):\n";
        cin >> Rooms; 
        if (Rooms < 1) 
        {
            cout << "Invalid input. You must paint at least one room.\n";
        }
    } while (Rooms < 1); 
    return Rooms; 
}
