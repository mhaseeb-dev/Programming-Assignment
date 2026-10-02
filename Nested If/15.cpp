#include <iostream>
#include <string>
using namespace std;

int main() {
    int age, written;
    string vision, road;

    cout << "Enter age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Passed vision test? (yes/no): ";
        cin >> vision;
        if (vision == "yes") {
            cout << "Written test score: ";
            cin >> written;
            if (written >= 70) {
                cout << "Passed road test? (yes/no): ";
                cin >> road;
                if (road == "yes") {
                    cout << "License issued" << endl;
                } else {
                    cout << "Rejected: failed road test" << endl;
                }
            } else {
                cout << "Rejected: written score below 70" << endl;
            }
        } else {
            cout << "Rejected: failed vision test" << endl;
        }
    } else {
        cout << "Rejected: under 18" << endl;
    }
    return 0;
}