#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include "account.h"

using namespace std;
Account account;
std::list<Account> accounts;

void displayAccounts(list<Account>& acccounts)
{
    if (accounts.size() > 0)
    {
        cout << endl;
        for (list<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it)
        {
            account.displayAccountInfo(std::string name, float balance);
        }
    }
    else
    {
        cout << "INFO:    No accounts to show. \n";
    }
}

Account* findAccountById(list<Account>& accounts)
{
    int id;
    cout << "Enter the ID of the account to find: ";
    cin >> id;
    for (list<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it)
    {
        if (!(it->getID() == id))
        {
            continue;
        }
        cout << "Found account: ";
        account.displayAccountInfo(std::string name, float balance);
        return &*it;
    }
    cout << "Account not found.\n";
    return nullptr;
}

void deposit(list<Account>& accounts)
{
    Account* foundAccount = findAccountById(accounts);
    if (!foundAccount)
    {
        return;
    }
    float deposit;
    cout << "Amount to deposit: ";
    cin >> deposit;
    *foundAccount += deposit;
}

void withdraw(list<Account>& accounts)
{
    Account* foundAccount = findAccountById(accounts);
    if (!foundAccount)
    {
        return;
    }
    float withdrawal;
    cout << "Amount to withdraw: ";
    cin >> withdrawal;
    *foundAccount -= withdrawal;
}

int main()
{
    int choice = -1;
    while (choice != 0)
    {
        cout << "\nAccount Menu: \n";
        cout << "1. Display Account Information \n";
        cout << "2. Add a deposit to an account \n";
        cout << "3. Withdraw from an account \n";
        cout << "4. Add new account \n";
        cout << "5. Find Account by ID \n";
        cout << "0. Quit Program \n";
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
            displayAccounts(accounts);
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

        case 4:
        {
            Account newAccount;
            newAccount.inputAccountInfo();
            accounts.push_back(newAccount);
            cout << "New account added.\n";
            break;
        }
        case 5:
        {
            findAccountById(accounts);
            break;
        }
        }
    }

    return 0;
}