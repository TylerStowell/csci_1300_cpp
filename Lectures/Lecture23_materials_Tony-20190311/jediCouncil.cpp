#include <iostream>
#include <string>
#include "jedi.h"

using namespace std;

const int COUNCIL_CAP = 5;  // global variable for size of council array

int mostPowerfulest(Jedi array[], int size) {
    int idx_max = -1;
    int max_power = 0;
    for (int k=0; k<size; k++) {
        if (array[k].get_power() > max_power) {
            idx_max = k;
        }
    }
    return idx_max;
}

Jedi duel(Jedi combatant1, Jedi combatant2) {
    // winner is whoever is more powerful
    if (combatant1.get_power() > combatant2.get_power()) {
        return combatant1;
    } else if (combatant1.get_power() < combatant2.get_power()) {
        return combatant2;
    } else {
        // return a "null" Jedi if no clear winner
        return Jedi();
    }
}

int main() {

    Jedi council[COUNCIL_CAP];        // create an array for 5 Jedis
    council[0] = Jedi("Mace", 10, 12);
    council[1] = Jedi("Yoda", 8, 19);

    for (int k=0; k < COUNCIL_CAP; k++) {
        council[k].display();
    }

    int idx = mostPowerfulest(council, 2);
    cout << "Most powerful is at index " << idx << ":" << endl;
    council[idx].display();

    Jedi winner = duel(council[0], council[1]);
    cout << "Winner is: " << winner.get_name() << endl;

    return 0;
}
