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
    int break_code;
    std::string name;

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
            std::ofstream o("./admin/storage.json");
            o << std::setw(4) << j << std::endl;

            // confirmation
            std::cout << "updated\n";
                    
        }
        else
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it) 
            {
                std::cout << *it << '\n';
                if (*it == pin_entry)
                {
                    // set name
                    name = it.key();

                    // print message
                    std::cout << "Welcome, " << name << "\n";
                    
                    // open door
                    // Will be constructed when I have the parts

                    // exit code
                    break_code = 1;

                    break;
                };
            };
            if (break_code == 0)
            {
                std::cout << "Incorrect code\n";
            };
            
        };
        pin_entry = 0;
        break_code = 0;
    };
    
    


    // unlock door if matched

};