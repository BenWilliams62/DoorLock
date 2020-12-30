// header files
#include <string>

/*
    get codes as objects
*/

class User
{
    // attributes
    int pin;
    std::string name;

    // function
    int get_pin();
    std::string get_name();
    void add_data(std::string name_entry, int pin_entry);

}


/*
    create a vector of objects
*/
User find_user();   // need writing
std::vector<User> get_users(); // need writing



/*
    log in
*/

void unlock(std::vector<User> users);
int enter_passcode();


