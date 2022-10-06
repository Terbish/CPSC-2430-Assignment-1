#include "management.h"
#include <iostream>
#include <queue>
#include <vector>
using namespace std;



class Animals
{
public:
    queue<string> Dogs;
    queue<string> Cats;
    queue<int> prio;

    int input;
    string animalName;

    

    void addAnimal() {
        cout << "Please enter the name of your animal:\n";
        cin >> animalName;
        cout << "Is it a dog or a cat? (Enter 1 for Dogs, 2 for Cats)\n";
        cin >> input;

        if (input == 1)
        {
            Dogs.push(animalName);
            prio.push(1);
            cout << animalName << " has been added to the list of dogs.\n";

        }
        else if (input == 2)
        {
            Cats.push(animalName);
            prio.push(2);
            cout << animalName << " has been added to the list of cats.\n";

            
        }
    }

    void getAnimal() {
        string congrats = "Congratulation, you are now the proud parent of: ";
        cout << "Would you like a dog or a cat?\nPlease enter 1 for dog, 2 for cat, and 3 for either. Press 0 to return to menu.\n";
        cin >> input;
        if (Dogs.empty() && Cats.empty())
        {
            cout << "Unfortunately there are no animals up for adoption at this moment, please come back later.\n";
            return Init();
        }
        else
        {
            if (input == 1)
            {
                if (Dogs.size() == 0)
                {
                    cout << "I'm sorry, there are no dogs available to be adopted.\n";
                    return getAnimal();
                }
                else
                {
                    Dogs.front() = animalName;
                    Dogs.pop();
                    cout << congrats << animalName << "\n";
                }

            }
            else if (input == 2)
            {
                if (Dogs.size() == 0)
                {
                    cout << "I'm sorry, there are no cats available to be adopted.\n";
                    return getAnimal();
                }
                else
                {
                    Cats.front() = animalName;
                    Cats.pop();
                    cout << congrats << animalName << "\n";
                }
            }
            else
            {
                if (prio.front() == 1)
                {
                    Dogs.front() = animalName;
                    Dogs.pop();
                    cout << congrats << animalName << "\n";

                }
                else if (prio.front() == 2) {
                    Cats.front() = animalName;
                    Cats.pop();
                    cout << congrats << animalName << "\n";
                }

            }

        }
    }

        
};

void Init() {
    int input;
    string endOfTask = "==============================================================\n";
    cout << "What would you like to do?\n" << "Press 1 to leave your animal at the shelter\t Press 2 to adopt an animal\t Press 0 to exit\n";
    cin >> input;

    if (input == 1)
    {
        Animals deposit;
        deposit.addAnimal();
        cout << endOfTask;
        return Init();
    }
    else if (input == 2)
    {
        Animals adopt;
        adopt.getAnimal();
        cout << endOfTask;
        return Init();
    }
    else if (input == 0)
    {
        cout << "Thank you for visiting the shleter, we hope to see you again.\n";
        exit(0);
    }
}