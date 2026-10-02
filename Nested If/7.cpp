#include <iostream>
using namespace std;

int main() 
{
    int balance = 5000;
    int pin, amount;

    cout << "Enter PIN: ";
    cin >> pin;

    if (pin == 4321) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount % 500 == 0) {
            if (amount <= balance) {
                balance = balance - amount;
                cout << "Withdrawal successful. Remaining balance: " << balance << endl;
            } else {
                cout << "Insufficient balance" << endl;
            }
        } else {
            cout << "Amount must be a multiple of 500" << endl;
        }
    } else {
        cout << "Wrong PIN" << endl;
    }
    return 0;
}