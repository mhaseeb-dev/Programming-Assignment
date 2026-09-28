#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Please enter a valid non-negative age." << endl;
    } else if (age <= 12) {
        cout << "You are classified as a child." << endl;
    } else if (age >= 13 && age <= 19) {
        cout << "You are classified as a teenager." << endl;
    } else {
        cout << "You are classified as an adult." << endl;
    }

    return 0;
}
