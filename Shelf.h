#pragma once
#ifndef SHELF_H
#define SHELF_
#include <string>
#include <iostream>
using namespace std;
const int Size = 10;       //Global constant for the number of boardgames

class shelf {
private:
    string numBoardGames[Size];     //Array to hold the number of board games
    int currentNum;     //Variable to hold the current number of board games
    int numRemoved;
public:
    shelf();                    //Default constructor
    //shelf(string, int);         //Overloaded constructor

    void addBoardGame(string );         //Function to add board games
    string removeBoardGame(string );      //Function to remove boardgames
    void displayShelf();        //Function to see how many boardgames are currently on the shelf

};

#endif // SHELF_H