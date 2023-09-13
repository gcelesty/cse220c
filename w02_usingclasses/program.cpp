#include <iostream>
#include <string>
#include "account.h"

using namespace std;

int main()
{
    Account account;

    account.inputAccountInfo();

    int choice = -1;
    while (choice != 0)
    {
        cout << "\nAccount Menu: \n";
        cout << "0. Quit Program \n";
        cout << "1. Display Account Information \n";
        cout << "2. Add a deposit to an account \n";
        cout << "3. Withdraw from an account \n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 0:
            {
                break;
            }

            case 1:
            {
                account.displayAccountInfo();
                break;
            }

            case 2:
            {
                float deposit;
                cout << "Amount to deposit: ";
                cin >> deposit;
                account.addDeposit(deposit);
                break;
            }

            case 3:
            {
                float withdraw;
                cout << "Amount to withdraw: ";
                cin >> withdraw;
                account.withdraw(withdraw);
                break;
            }
        }
    }
}

