#include <iostream>
#include <string>
#include "account.hpp"

using namespace std;

int main()
{
    Account accout;

    account.inputAccountInfo();

    int accHolders_choice = -1;
    while (accHolders_choice != 0)
    {
        cout << "\nAccount Menu: \n";
        cout << "0. Quit Program \n";
        cout << "1. Display Account Information \n";
        cout << "2. Add a deposit to an account \n";
        cout << "3. Withdraw from an account \n";
        cout << "Your choice: ";
        cin >> accHolders_choice;

        switch (accHolders_choice)
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
                float depositAmount;
                cout << "Amount to deposit: ";
                cin >> depositAmount;
                account.addDeposit(depositAmount);
            }

            case 3:
            {
                float withdrawAmmount;
                cout < "Amount to withdraw: ";
                cin >> withdrawAmount;
                account.withdrawAmount(withdrawAmount);
            }
        }
    }
}

