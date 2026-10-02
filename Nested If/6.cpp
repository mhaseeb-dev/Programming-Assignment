#include <iostream>
using namespace std;

int main() {
    int age;
    string citizen;
    cout << "Enter age: ";
    cin >> age;
    cout << "Are you a citizen? (yes/no): ";
    cin >> citizen;

    if (age >= 18) {
        if (citizen == "yes") {
            cout << "Eligible to vote" << endl;
        } else {
            cout << "Not eligible: not a citizen" << endl;
        }
    } else {
        cout << "Not eligible: under 18" << endl;
    }
    return 0;
}