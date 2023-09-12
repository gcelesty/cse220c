#include <iostream>
using namespace std;

int main()
{
    string name; // string hold a full name of characters
    double balance; // double to hold decimals
    int account_id; // int for the accout number since no decimals

    // collect name & balance
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the balance: ";
    cin >> balance;

    // loop through options until user quits
    while (true)
    {
        // basic menu options with "\n" for formatting purposes
        cout << "\n";
        cout << "Account Menu: \n";
        cout << "0. Quit Program \n";
        cout << "1. Display Account Information \n";
        cout << "2. Add a deposit to an account \n";
        cout << "3. Withdraw from an account \n";
        cout << "\n";

        // asks user for choice
        int choice;
        cout << "Your choice: ";
        cin >> choice;

        // 0. Quit Program
        if (choice == 0)
            break;

        // 1. Display Account Information
        else if (choice == 1)
        {
            cout << "Account ID: ";
            cout << account_id << " ";
            cout << "Name: " << name << " ";
            cout << "Balance: $" << balance;
            cout << "\n";
        }

        // 2. Add a deposit to an account
        else if (choice == 2)
        {
            double deposit;
            cout << "Amount to deposit: ";
            cin >> deposit;

            balance += deposit;
        }

        // 3. Withdraw from an account
        else if (choice == 3)
        {
            double withdraw;
            cout << "Amount to withdraw: ";
            cin >> withdraw;

            balance -= withdraw;
        }
    }
}