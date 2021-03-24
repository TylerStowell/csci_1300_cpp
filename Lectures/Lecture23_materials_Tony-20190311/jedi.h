#ifndef JEDI_H
#define JEDI_H

#include <string>
using namespace std;
class Jedi {
    // functions associated with Jedi
    public:
        Jedi();                         // Default constructor
        Jedi(string s, int h, int p);   // Parameterized constructor
        void rest();                    // increase the health by 1
        void train();                   // increase the power by 1
        void set_name(string s);        // set the Jedi's name
        int get_health() const;         // return the Jedi's health
        int get_power() const;          // return the Jedi's attack strength
        string get_name() const;        // return the Jedi's name
        void display() const;           // display the Jedi's stats
    // data associated with Jedi
    private:
        int health;                     // eating yo vegetables?
        int power;                      // push-ups?
        string name;
};

#endif // this is important but easy to forget!
