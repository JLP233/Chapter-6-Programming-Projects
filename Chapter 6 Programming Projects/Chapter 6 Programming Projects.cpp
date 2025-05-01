// Chapter 6 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program calculates and displays the labor and paint costs of a painting job based on number of rooms, paint, and labor costs.

#include <iostream>


using namespace std;

//Get user input and validate number of rooms
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

//Get square footage wall space per room and validate
float GetWallAreaPerRoom(int RoomNumber) 
{
    float WallSquareFootage; 
    do {
        cout << "Enter square feet of wall space for room #" << RoomNumber;
        cin >> WallSquareFootage; 
        if (WallSquareFootage < 0) 
        {
            cout << "Invalid input. Square footage cannot be negative.\n";
        }
    } while (WallSquareFootage < 0); 
    return WallSquareFootage;  
}

//Get paint cost per gallon and validate


//Calculate total wall area to be painted


//Calculate number of gallons of paint needed


//Calculate paint cost


//Calculate labor hours


//Calculate total labor charges


//Display formated results 


int main() {



}