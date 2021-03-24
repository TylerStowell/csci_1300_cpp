#include <iostream>
#include <iomanip>
#include "BankAccount.h"

using namespace std;


int main()
{
   BankAccount harrys_account(1000);
   harrys_account.deposit(500);
   harrys_account.withdraw(2000);
   harrys_account.add_interest(1);
   cout << fixed << setprecision(2) << harrys_account.get_balance() << endl;

   return 0;
}

