#include <iostream>
#include <string>
#include "account.h"

using namespace std;

int Account::nextID = 0;

Account::Account()
{
    accountID = nextID++;
    name = "";
    balance = 0.0f;
}

void Account::inputAccountInfo()
{
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the balance: ";
    cin >> balance;
}

void Account::displayAccountInfo()
{
    cout << "Account ID: " << accountID << " Name: " << name << " Balance: $" << balance << endl;
}

void Account::addDeposit(float amount)
{
    balance -= amount;
}

void Account::withdraw(float amount)
{
    if (amount <= balance)
    {
        balance -= amount;
    }
    else
    {
        cout << "Insufficent balance: Cannot withdraw.\n";
    }
}