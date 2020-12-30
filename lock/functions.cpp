#include <iostream>
#include <string>
#include <vector>

#include "functions.hpp"

/*
    create an object
*/
// for adding data
void User::add_data(std::string name_entry, int pin_entry)
{
    pin = pin_entry;
    name = name_entry;
};

// for getting pin
int get_pin()
{
    return pin;
};

// for getting name
std::string get_name()
{
    return name;
};


/*
    for adding names from database into objects
*/

User find_user()
{
    // within database, take a row, and turn it into an object
};

std::vector<User> get_users()
{
    std::vector<User> users;
    // go through every row in database
    // for loop{
    user = find_user()
    // }
    // from each row, create an object i.e. find_user()
    users.pushback(new_user);
    // add this new User object to a vector of users

    return users;
};
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
    users = get_users();

    // loop for continous usage
    while (true)
    {
        // enter pin
        pin_entry = enter_passcode();

        // check pin
        if (pin_entry == 873283)
        {
            // call for an update of the of the system
            user = get_users();
        }
        else
        {
            for (int i = 0; i <= user.size(); i++)
            {
                if (users[i].get_pin() == pin_entry)
                {
                    // unlock door


                    // output welcome message
                    std::cout << "Welcome, " << users[i].get_name() << "!\n";

                    // break the loop
                    break_code = 1;
                    break;
                };
            };
            if (break_code != 1)
            {
                std::cout << "Wrong password, please try again\n";
            };
            break_code = 0;
        };
    };
    
    


    // unlock door if matched

};