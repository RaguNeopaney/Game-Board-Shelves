#include <iostream>
#include "Shelf.h"
using namespace std;

int main() {
    int ans;
    string gameName;
    shelf* All = new shelf;
    do {
        cout << "Press 1 to add a board game to the shelf" << endl;
        cout << "Press 2 to remove a board game from the shelf" << endl;
        cout << "Press 3 to see how many board games are currently on the shelf" << endl;
        cout << "Press 4 to quit" << endl;
        cin >> ans;
        cout << endl;
        if (ans == 1) {
            try
            {
                cout << "Add board game" << endl;
                cout << "Enter name of the Board Game: ";
                cin >> gameName;
                All->addBoardGame(gameName);
            }
            catch (string fullexcep)
            {
                cout << fullexcep;
                cout << endl;
            }

        }
        else if (ans == 2) {
            try
            {
                cout << "Remove board game" << endl;            
                All->displayShelf();
                cout << "Enter the name of game to be removed: ";
                cin >> gameName;
                cout << "The board game " << All->removeBoardGame(gameName) << " is removed." << endl;
                cout << endl;
            }
            catch (string removexcep)
            {
                cout << removexcep;
                cout << endl;
            }

        }
        else if (ans == 3) {
            cout << "Display shelf" << endl;
            All->displayShelf();
   
        }
        else if (ans == 4) {
            cout << "Goodbye." << endl;
        }
        else {
            cout << "Invaid input, please try again." << endl;
            ans = 0;
        }

    } while (ans < 4);


    return 0;
}
