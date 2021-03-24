#include <iostream>
#include <string>
#include "jedi.h"

using namespace std;

int main() {

    // testing the parameterized constructor
    Jedi vader("Darth Vader", 10, 13);
    // "testing" the display MF'er - yeah I'm going with that abbreviation.
    vader.display();


    // testing the default constructor
    Jedi luke;
    // testing the set_name() member function (MFer)
    luke.set_name("Luke");
    luke.display();
    // testing the train mfer
    luke.train();
    luke.display();
    // testing the rest mfer
    luke.rest();
    luke.display();
    // testing the get_health() mfer
    cout << luke.get_health() << endl; // should be 1
    // testing the get_power() mfer
    cout << luke.get_power() << endl; // should be 1
    // testing the get_name() mfer
    cout << luke.get_name() << endl; // should be "Luke"


    return 0;
}
