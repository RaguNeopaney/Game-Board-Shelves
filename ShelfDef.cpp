#include "Shelf.h"
#include <iostream>
#include <string>
using namespace std;

shelf::shelf() {        //Default constructor

	// This loop goes through every element on the numBoardGames and initilze empty value to them
	for (int i = 0; i < Size; i++)
	{
		numBoardGames[i] = "Empty";
	}

	currentNum = 0;
	numRemoved = 0;
}
void shelf::addBoardGame(string GameName) {
	if (currentNum == Size)
	{
		string fullException = "ERROR: Cannot add more. Shelf if full \n";
		throw fullException;
	}
	else
	{
		if (numBoardGames[numRemoved] == "Empty")
		{
			numBoardGames[numRemoved] = GameName;
			currentNum++;
		}
		else
		{
			numBoardGames[currentNum] = GameName;
			currentNum++;
		}
	}

}

string shelf::removeBoardGame(string GameName) {
	if (currentNum == 0)
	{
		string error = "ERROR: The shelf is empty. Add something before removing it \n";
		throw error;
	}
	else
	{
		for (int i = 0; i < Size; i++)
		{
			if (numBoardGames[i] == GameName) {
				numBoardGames[i] = "Empty";
				numRemoved = i;
			}
		}
		currentNum--;
		return GameName;
	}

}

void shelf::displayShelf() {
	cout << endl;
	cout << "Current Shelf" << endl;
	for (int i = 0; i < Size; i++)
	{
		cout << "Spot " << i + 1<<": ";
		cout << numBoardGames[i] << endl;
	}
	cout << endl ;
}
