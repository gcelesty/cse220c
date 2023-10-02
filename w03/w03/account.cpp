#include <iostream>
#include <string>
#include "account.h"

using namespace std;

int Account::nextID = 0;

Account::Account()
{
    accountID = nextID++;
    name = "";
    balance = 0.0;
}

Account::Account(int accountID, std::string name, float balance) :
    accountID(accountID), name(name), balance(balance)
{

}

void Account::inputAccountInfo()
{
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the balance: ";
    cin >> balance;
}

int Account::getID() const
{
    return accountID;
}

int Account::displayAccountInfo(std::string name, float balance)
{
    cout << "Account ID: " << accountID << " | Name: " << name << " | Balance: $" << balance << endl;
}

void Account::addDeposit(float amount)
{
    balance += amount;
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

Account& Account::operator+=(float amount)
{
    balance += amount;
    return *this;
}

Account& Account::operator-=(float amount)
{
    if (amount <= balance)
    {
        balance -= amount;
    }
    else
    {
        cout << "Insufficent balance: Cannot withdraw.\n";
    }
    return *this;
}