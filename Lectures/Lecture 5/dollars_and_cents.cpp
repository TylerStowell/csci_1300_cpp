#include <iostream>
using namespace std;
int main()
{
    int pennies = 1729;
    int dollars = pennies / 100;
    int cents = pennies % 100;
    cout << "You have this many dollars: " << dollars << endl;
    cout << "and this many cents: " << cents << endl;
    cout << "and this much sense: " << 0 << endl;
    return 0;
}

