#include <iostream>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>
#include "functions.hpp"

using json = nlohmann::json;


/*
    add data
*/
// ask for user's name
std::string new_name()
{
    // initiate name string
    std::string name;

    // ask for input
    std::cout << "Please enter the new name for a user:\n";
    std::cin >> name;

    // validate name



    // return new name
    return name;

    std::cout << "\n";

};

// ask for user's pin
int new_pin()
{
    // initiate integer
    int code;

    // ask for input
    /*
    std::cout << "Please enter the new pin for the user:\n";
    std::cin >> code;
    std::cout << "\n";*/

    // validate: must be a six digit number
    while ((code < 99999) || (code >= 999999))
    {
        // ask for input
        std::cout << "Please enter the new pin for the user:\n";
        std::cin >> code;
    };
    

    // return pin
    return code;
};

//add user to database
void add_user(std::string name, int code)
{
    // open json
    std::ifstream i("./admin/storage.json");
    json j;
    i >> j;

    // add data to a database
    j[name] = code;

    // close json
    std::cout << "added\n";
    std::ofstream o("./admin/storage.json");
    o << std::setw(4) << j << std::endl;
};

/*
    create new user
*/

// combine methods
void create_user()
{
    // initiate name and pin 
    std::string id;
    int pin;

    // ask for user name
    id = new_name();

    // ask for pin
    pin = new_pin();

    // add to database
    add_user(id, pin);

    // print success
    std::cout << "Success\n";
    
};

/*
    delete user
*/
void delete_user()
{
    // initiate variables
    std::string user;
    int pin_db;
    int pin_user;

    // ask for username
    std::cout << "Please enter the username you would like to delete:\n";
    std::cin >> user;
    std::cout << "\n";

    // ask for id
    std::cout << "Please enter the pin for this user:\n";
    std::cin >> pin_user;
    std::cout << "\n";

    // check database for the username, and return the pin
    //open database
    std::ifstream i("./admin/storage.json");
    json j;
    i >> j;

    pin_db = j[user];


    // check id against the database, delete user if correct
    if (pin_user == pin_db)
    {
        // delete user
        j.erase(user);
        std::cout << "User deleted\n";
        
    }
    else
    {
        std::cout << "The details entered were not correct, please try again\n";
    };

    // close database
    std::ofstream o("./admin/storage.json");
    o << std::setw(4) << j << std::endl;
    std::cout << "\n";
};

void look_up_users()
{
    // open database
    std::ifstream i("./admin/storage.json");
    json j;
    i >> j;

    // close database
    std::ofstream o("./admin/storage.json");
    o << std::setw(4) << j << std::endl;

    // make space
    std::cout << "\n\n";

    // print all users and their codes
    for (json::iterator it = j.begin(); it != j.end(); ++it)
    {
        std::cout << it.key() << "\t" << it.value() << "\n";
    };
    // make space
    std::cout << "\n\n";
};