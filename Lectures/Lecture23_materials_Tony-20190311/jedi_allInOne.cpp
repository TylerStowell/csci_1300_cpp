#include <iostream>
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


// define your functions here!
Jedi::Jedi() {
    health = 0;
    power = 0;
    name = "Padawan";
}
Jedi::Jedi(string s, int h, int p) {
    health = h;
    power = p;
    name = s;
}
void Jedi::rest() {
    health += 1;
}
void Jedi::train() {
    power += 1;
}
void Jedi::set_name(string s) {
    name = s;
}
int Jedi::get_health() const {
    return health;
}
int Jedi::get_power() const {
    return power;
}
string Jedi::get_name() const {
    return name;
}
void Jedi::display() const {
    cout << "Jedi " << name << " has the following stats:" << endl;
    cout << " health: " << health << "   ";
    cout << " power: " << power << endl;
}


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
