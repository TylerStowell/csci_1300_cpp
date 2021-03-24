#include <iostream>
#include <string>
#include "jedi.h"

using namespace std;

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
