#include <iostream>
#include <string>
using namespace std;

int main() {
    double amount, discount, finalAmount;
    string member;

    cout << "Enter bill amount: ";
    cin >> amount;
    cout << "Are you a member? (yes/no): ";
    cin >> member;

    if (amount >= 5000) {
        if (member == "yes") {
            discount = 20;
        } else {
            discount = 10;
        }
    } else {
        if (member == "yes") {
            discount = 5;
        } else {
            discount = 0;
        }
    }

    finalAmount = amount - amount * discount / 100;
    cout << "Discount: " << discount << "%" << endl;
    cout << "Final amount: " << finalAmount << endl;
    return 0;
}