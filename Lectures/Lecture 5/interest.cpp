#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double principle = 100.0;
    double rate = 5;
    double n = 3;
    double balance = principle * pow(1.0 + (rate / 100.0), 3);
    cout << balance << endl;
    return 0;
}

