#include "management.h"
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
   
string footer = "===============================================================================================\n";

void Shelter::addAnimal() {
    cout << "Please enter the name of your animal:\n";
    cin >> animalName;
    cout << "Is it a dog or a cat? (Enter 1 for Dogs, 2 for Cats)\n";
    cin >> input;

    if (input == 1)
    {
        Dogs.push(animalName);
        priority.push(1);
        cout << animalName << " has been added to the list of dogs.\n";

    }
    else if (input == 2)
    {
        Cats.push(animalName);
        priority.push(2);
        cout << animalName << " has been added to the list of cats.\n";

            
    }
}

void Shelter::getAnimal() {
    string congrats = "Congratulation, you are now the proud parent of: ";
    cout << "Would you like a dog or a cat?\nPlease enter 1 for dog, 2 for cat, and 3 for either. Press 0 to return to menu.\n";
    cin >> input;

    if (input == 1)
    {
        if (Dogs.empty())
        {
            cout << "I'm sorry, there are no dogs available to be adopted.\n";
            cout << footer;
            return getAnimal();
        }
        else
        {
            cout << congrats << Dogs.front() << "\n";
            cout << footer;
            Dogs.pop();
            return Init();
        }

    }
    else if (input == 2)
    {
        if (Cats.empty())
        {
            cout << "I'm sorry, there are no cats available to be adopted.\n";
            cout << footer;
            return getAnimal();

        }
        else
        {
            cout << congrats << Cats.front() << "\n" << footer;
            cout << footer;
            Cats.pop();
            return Init();
        }
    }
    else if (input == 3)
    {
        if (priority.front() == 1)
        {
            
            cout << congrats << Dogs.front() << "\n";
            cout << footer;
            Dogs.pop();
            return Init();


        }
        else if (priority.front() == 2) 
        {
            cout << congrats << Cats.front() << "\n";
            cout << footer;
            Cats.pop();
            return Init();
        }

    }

        
}

void Shelter::Init() {
    int input;
    string header = "============================= Welcome to the Allreach Shelter =================================\n";

    //spalshScreen();
    cout << header;
    cout << "What would you like to do?\n" << "\tPress 1 to leave your animal at the shelter\tPress 2 to adopt an animal\n\tPress 3 to access animal lists\t\t\tPress 0 to exit\n";
    cin >> input;

    if (input == 1)
    {
        addAnimal();
        cout << footer;
        return Init();
    }
    else if (input == 2)
    {
        if (Dogs.empty() && Cats.empty())
        {
            cout << "Unfortunately there are no animal up for adoption at this moment, please come back later.\n"; 
            cout << footer;
            return Init();
        }
        else
        {
            getAnimal();
            cout << footer;
            return Init();
        }
            
    }
    else if (input == 0)
    {
        cout << "Thank you for visiting the shleter, we hope to see you again.\n";
        exit(0);
    }
    else if (input == 3)
    {
        if (!Dogs.empty() && !Cats.empty())
        {
            getAnimalList();
        }
        else
        {
            cout << "There are no animals in the system at the moment, please check back later.\n" << footer;
            return Init();
        }
        
    }
    else if (input)
    {

    }
}

void Shelter::getAnimalList()
{
    queue<string> duplicate;
    cout << "Which animal list do you want to see?\n" << "Press 1 for dog's, press 2 for cat's\n";
    cin >> input;
    if (input == 1)
    {
        while (!Dogs.empty())
        {
            cout << Dogs.front() << "\t";
            Dogs.pop();
        }
        cout << endl;
    }
    else if (input == 2)
    {
        while (!Cats.empty())
        {
            cout << Cats.front() << "\t";
        }
        cout << endl;
    }
    cout << "List printed successfully. Press 0 to return to menu.\n";
    cin >> input;
    if (input == 0)
    {
        return Init();
    }

}

void Shelter::spalshScreen() {
    cout << 
        "                                                .::.   :==-                    \n"
        "                                               +%%%%#+#%%%%#:                  \n"
        "                                              -%%%%%%%%%%%%%+                  \n"
        "                                               *%%%%%%%%%%%#.                  \n"
        "                                                 =#%%%%%%%#+.                  \n"
        "                                 :=#*=.           :+#%%*=                      \n"
        "                                -*######*-           ..                        \n"
        "                            :+############=.    ----------                     \n"
        "                        .=*################*=.  ##########                     \n"
        "                     .-*########++############+-#########*                     \n"
        "                   :+##########=:::=#####################+                     \n"
        "                .-*############=::::-*###################=                     \n"
        "              :+###############=::::::+##################-                     \n"
        "           .=###########==*####=:::::::*#################=.                    \n"
        "         :+##############=:=*##=::::::::###################+:                  \n"
        "      :+##################-::=#=::::::::-+####################=.               \n"
        "    -*####################*::::::::::::::::-*###################*-             \n"
        " :=########################:::::::::::::::::::=*###################=.          \n"
        " +########################*-:::::::::::::::::::::-+###################*        \n"
        " :#######################=::::::::::::::::::-=-::::+##################:        \n"
        "  -####################*-::::::::::::--::::-===:::::=################:         \n"
        "   :##################*:::::::::::::::=-::-====-:::::-##############:          \n"
        "    -###=#############-:::::::::::---===========:::::::*#######+###-           \n"
        "     ::  *############+:::::::::--==============-:::::::=#####*-:              \n"
        "         *###########=::::::::--=================-:::::::-*###*                \n"
        "         *########*=:::::::::=====================:::::::::=##*                \n"
        "         *#######=:::::::::::-=====================::::::::::+*                \n"
        "         *#####+::::::::::::::-====================-:::::::::::                \n"
        "         *###*-::::::::::::::::::-==================-::::::::::                \n"
        "         *###*-:::::::::::::::::::::-================-:::::::::                \n"
        "         +#####+-::::::::::::::::::::-==================-------                \n"
        "         +#######+-:::::::--=++*+:::::========================-                \n"
        "         +##########*++*#########:::::-=======================-                \n"
        "         +#######################=:::::=======================-                \n"
        "         =#######################*:::::-======================-                \n"
        "         =########################-:::::-=====================-                \n"
        "         =########################*::::::-====================-                \n"
        "         =#########################-::::::-===================-                \n"
        "         ..........................       ..........:::::::: : .               \n";
}

//bool Shelter::ERROR_CATCHING(const string& s)
//{   
//    for (int i = 0; i < s.length(); i++) {
//        if (isdigit(s[i]) == false) {
//            return false;
//        }
//        return true;
//    }
//}

