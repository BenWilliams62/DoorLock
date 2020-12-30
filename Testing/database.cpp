#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream>
// for convenience
using json = nlohmann::json;


int main()
{
    // create json object
    json j;
    j["name"] = "Niels";
    j["pi"] = 3.141;

    // read json object
    
    std::ifstream i("./Testing/database.json");
    json j2;
    i >> j2;
    

    //write json object
    
    std::ofstream o("./Testing/pretty.json");
    o << std::setw(4) << j << std::endl;
    

    std::string test_v = j["name"];
    std::cout << test_v << std::endl;
    std::cout << j2["Ben"] << std::endl;
    
    return 0;
}; 