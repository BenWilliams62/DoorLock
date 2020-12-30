// header files
#include <string>

/*
    add data
*/
// create user data
std::string new_name();
int new_pin();

// add to databse
void add_user(std::string name, int code);

// create new user: ask for name, ask for pin, add to database
void create_user();



/*
    remove data
*/

void delete_user();


/*
    review recent entrances
    might not use this
*/