#include "management.h"
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
   
string footer = "===============================================================================================\n";
string adoptionMessage = "Congratulation, you are now the proud parent of: ";

void Shelter::addAnimal() {
    // asking for user input
    cout << "Please enter the name of your animal:\n";
    cin >> animalName;
    cout << "Is it a dog or a cat? (Enter 1 for Dogs, 2 for Cats)\n";
    cin >> input;

    // if user user is depositing a dog
    if (input == 1)
    {
        Dogs.push(animalName);  // push the name of the animal to the Dogs queue
        priority.push(1);   // push identifier 1 to the priority queue
        cout << animalName << " has been added to the list of dogs.\n";

    }
    else if (input == 2)    // if user is depositing a cat
    {
        Cats.push(animalName);  // push the name of the cat to the Cats queue
        priority.push(2);   // push identifier 2 to the priority queue
        cout << animalName << " has been added to the list of cats.\n";

            
    }
    cout << "\tWould you like to deposite more animals?\n"  // prompt if the user want to continue deposition or quit
        "\t\t1.YES\t\t\t\t2.NO\n";
    cin >> input;
    if (input == 1) // if continue to deposit 
    {
        return addAnimal();
    }
}

void Shelter::getAnimal() {
    cout << "Would you like a dog or a cat?\nPlease enter 1 for dog, 2 for cat, and 3 for either. Press 0 to return to menu.\n";
    cin >> input;

    if (input == 1) // if the user wants to adopt a dog
    {
        if (Dogs.empty())   // check if Dogs queue is empty
        {
            cout << "I'm sorry, there are no dogs available to be adopted.\n";  // error 
            cout << footer;
            return getAnimal(); // return to adopt animal menu
        }
        else // if Dog queue is not empty
        {
            getDog();
        }

    }
    else if (input == 2)
    {
        if (Cats.empty())   // check if Cats queue is empty
        {
            cout << "I'm sorry, there are no cats available to be adopted.\n";  // error
            cout << footer;
            return getAnimal(); // return to adopt animal menu

        }
        else    // if Cats is not empty
        {
            getCat();
        }
    }
    else if (input == 3)    // if user has no preference
    {
        if (priority.front() == 1)  // if the first identifier of the queue is 1
        {
            getDog();


        }
        else if (priority.front() == 2) // if the first identifier of the queue is 2
        {
            getCat();
        }

    }

        
}

void Shelter::getDog()
{
    cout << adoptionMessage << Dogs.front() << "\n"; // get dog name from queue
    cout << footer;
    Dogs.pop(); // pop the name from the queue
    priority.pop();// pop the matching identifier from the priority queue
}

void Shelter::getCat()
{
    cout << adoptionMessage << Cats.front() << "\n";   // get cat name from queue
    cout << footer;
    Cats.pop(); // pop the name from queue
    priority.pop(); // pop the matching identifier from the priority queue
}

