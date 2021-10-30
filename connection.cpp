#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>
#include "crow_all.h"
#include <thread>




using namespace std;




int main()
{
  
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([]() {
        return "Hello World!";
    });

    app.port(18080).multithreaded().run();


}