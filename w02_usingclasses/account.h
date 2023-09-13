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
    void inputAccountInfo();
    void displayAccountInfo();
    void addDeposit(float amount);
    void withdraw(float amount);
};