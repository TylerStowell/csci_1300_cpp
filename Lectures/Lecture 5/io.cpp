#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double price_per_liter = 1.21997;
    int a = 13;
    int b = 4;
    int c = -123;

//    cout << "Price per liter: $" << fixed << setprecision(3) << price_per_liter << endl;
    cout << setw(8) << "Thing 1" << setw(8) << "Thing 2" << setw(8) << "Thing 3" << endl;
    cout << setw(8) << a << setw(8) << b << setw(8) << c << endl;
    cout << setw(8) << c << setw(8) << a << setw(8) << b << endl;
    return 0;
}