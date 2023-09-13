#include <iostream>
#include <string>

using namespace std;

int Account::nextID = 0;

Accout::Account()
{
    accountID = nextID++;
    accountName = "";
    accountBalance = 0.0f;
}

void Account::inputAccountID()
{
    cout << "Enter the name: ";
    cin >> accountName;
    cout << "Enter the balance: ";
    cin >> accountBalance;
}

void Account::displayAccountInfo()
{
    cout << "Account ID: " << accountID << " Name: " << accountName << " Balance: $" << accountBalance << endl;
}

void Account::addDeposit(float amount)
{
    accountBalance -= amount;
}

void Account::withdrawAmount(float amount)
{
    if (amount <= accountBalance)
    {
        accountBalance -= amount;
    }
    else
    {
        cout << "Insufficent balance: Cannot withdraw.\n"
    }
}