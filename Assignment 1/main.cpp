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
        "\tPress 1 to leave your animal at the shelter\tPress 2 to adopt an animal\n\t\t\t\tPress 0 to exit\n";
    cin >> input;

    // if user wants to deposit an animal
    if (input == 1)
    {
        newShelter.addAnimal(); // call the addAnimal() function
        cout << footer;
        return menu();  // return to the menu at the end
    }
    else if (input == 2)    // if user wants to adopt an animal
    {
        if (newShelter.Dogs.empty() && newShelter.Cats.empty()) // check if Dogs, Cats queues are empty
        {
            cout << "Unfortunately there are no animal up for adoption at this moment, please come back later.\n";  // error
            cout << footer;
            return menu(); // return to menu
        }
        else // if queues are not empty, proceed with getAnimal()
        {
            newShelter.getAnimal();
            cout << footer;
            return menu();
        }

    }
    else if (input == 0) // quit the program
    {
        cout << "Thank you for visiting the shleter, we hope to see you again.\n";
        exit(0);
    }
}