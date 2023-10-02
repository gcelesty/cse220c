#pragma once
#include <string>

class Account
{
private:
    int accountID;
    static int nextID;
    std::string name;
    float balance;
public:
    Account();
    Account(int accountID, std::string name, float balance);
    void inputAccountInfo();
    int getID() const;
    int displayAccountInfo(std::string name, float balance);
    void addDeposit(float amount);
    void withdraw(float amount);

    Account& operator+=(float amount);
    Account& operator-=(float amount);
};