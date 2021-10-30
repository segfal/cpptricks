#include <iostream>
#include <string>
#include <armadillo>
#include <fstream>
#include <sstream>
#include <jsoncpp/json/json.h>

using namespace std;


// Function: profile
// Purpose:
// Inputs:
// Outputs:
// Returns:
// Notes:


int main(int argc, char *argv[])
{
    // Declare variables
    Json::Value root;
    std::ifstream file("profile.json");
    file >> root;
    
    std::cout << root["username"].asString() << std::endl;
    std::cout << root["password"].asString() << std::endl;

}