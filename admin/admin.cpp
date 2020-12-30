/*
This is the admin panel for the lock

From here, you can add and remove users, as well as check logs of entrances.

Connecting to a database

TODO:
    - add database
    - create GUI
    - check log-ins
*/

#include <iostream>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>
#include "functions.hpp"

using json = nlohmann::json;

// main user interface 

int main()
{
    int reply;

    // ask whether to add a new user or delete a user
    while (true)
    {
        // ask for intended function
        std::cout << "Which action would you like to take?\n(only enter the number value)\n";
        std::cout << "1.\tAdd new user\n";
        std::cout << "2.\tDelete user\n";
        std::cout << "\n\n";
        std::cin >> reply;

        // if reply is 1, add new user, if 2 then delete user
        if (reply == 1)
        {
            create_user();
        }
        else if (reply == 2)
        {
            delete_user();
        }
        else
        {
            std::cout << "Incorrect input\n";
        };
        
    };
    return 0;
};