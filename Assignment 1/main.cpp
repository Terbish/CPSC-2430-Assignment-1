#include "management.h"
#include <iostream>
#include <queue>

using namespace std;

void menu();
Shelter newShelter;

int main() {
    menu();
    return 0;
}

void menu() {
    int input;
    string header = "============================= Welcome to the Allreach Shelter =================================\n";
    string footer = "===============================================================================================\n";
    cout << header;
    cout << "\t\t\t\tWhat would you like to do?\n"
        "\tPress 1 to leave your animal at the shelter\tPress 2 to adopt an animal\n\tPress 3 to access animal lists\t\t\tPress 0 to exit\n";
    cin >> input;

    // if 
    if (input == 1)
    {
        newShelter.addAnimal();
        cout << footer;
        return menu();
    }
    else if (input == 2)
    {
        if (newShelter.Dogs.empty() && newShelter.Cats.empty())
        {
            cout << "Unfortunately there are no animal up for adoption at this moment, please come back later.\n";
            cout << footer;
            return menu();
        }
        else
        {
            newShelter.getAnimal();
            cout << footer;
            return menu();
        }

    }
    else if (input == 0)
    {
        cout << "Thank you for visiting the shleter, we hope to see you again.\n";
        exit(0);
    }
}