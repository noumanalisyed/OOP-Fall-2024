#include <iostream>
using namespace std;

class BankAccount{
public:
    BankAccount(){
        accountId = 0;
        accountHolderName = "";
        accountBalance = 0;
    }
    BankAccount(int accId,string accName, double bal){
        accountId = accId;
        accountHolderName = accName;
        accountBalance = bal;
    }
    void display(){
        cout<<"Account Id "<<accountId<<" , Account Holder Name "<<accountHolderName
            <<"Account Balance "<<accountBalance<<endl;
    }
private:
    int accountId;
    string accountHolderName;
    double accountBalance;
};

int main() {
    BankAccount bankAccount;
    BankAccount bankAccount1(1000,"Ahmad",550);
    bankAccount.display();
    bankAccount1.display();
    return 0;
}
