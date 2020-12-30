#include <iostream>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>
#include "functions.hpp"

using json = nlohmann::json;


/*
    unlock door
*/

// enter your pass code
int enter_passcode()
{
    // initialise integer
    int entry;

    // ask for input
    std::cout << "Please enter your pin\n";
    std::cin >> entry;

    // return entry
    return entry;

};

// unlock the door
void unlock()
{
    // initialise variables
    int pin_entry;
    std::vector<User> users;
    int break_code;

    // get list of users
    // open json
    std::ifstream i("./admin/storage.json");
    json j;
    i >> j;

    // close json
    std::cout << "added\n";
    std::ofstream o("./admin/storage.json");
    o << std::setw(4) << j << std::endl;
    

    // loop for continous usage
    while (true)
    {
        // enter pin
        pin_entry = enter_passcode();

        // check pin
        if (pin_entry == 873283)
        {
            // call for an update of the of the system
            // open json
            std::ifstream i("./admin/storage.json");
            i >> j;

            // close json
            std::cout << "added\n";
            std::ofstream o("./admin/storage.json");
            o << std::setw(4) << j << std::endl;
                    
        }
        else
        {
            
            // if inputted code is a value in json, then find the name (key)

                // std::cout << "Welcome, " << name << "\n";
                // open door

            
            // else
                // std::cout << "Incorrect pin\n";
        };
    };
    
    


    // unlock door if matched

};