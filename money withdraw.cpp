#include <iostream>
using namespace std;

class Account {
private:
    int accNum;
    double accBalance;

public:
    
    Account(int num, double balance) {
        accNum = num;
        accBalance = balance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            accBalance += amount;
            cout << "Deposit of $" << amount << " successful.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && accBalance >= amount) {
            accBalance -= amount;
            cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            cout << "Insufficient funds or invalid withdrawal amount.\n";
        }
    }

    
    double getBalance() {
        return accBalance;
    }
};

int main()
{   
    int num;
    double balance, depositAmount, withdrawAmount;

    cout << "Enter account number: ";
    cin >> num;

    cout << "Enter initial balance: $";
    cin >> balance;

    
    Account myAcc(num, balance);

    cout << "Enter deposit amount: $";
    cin >> depositAmount;
    myAcc.deposit(depositAmount);

    cout << "Enter withdrawal amount: $";
    cin >> withdrawAmount;
    myAcc.withdraw(withdrawAmount);

    
    cout << "Current Balance: $" << myAcc.getBalance() << endl;


   return 0;
}
