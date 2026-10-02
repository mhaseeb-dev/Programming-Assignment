#include <iostream>
#include <string>
using namespace std;

int main() {
    int age, price;
    string day;
    bool weekend;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter day: ";
    cin >> day;

    if (day == "Saturday" || day == "Sunday") {
        weekend = true;
    } else {
        weekend = false;
    }

    if (age < 5) {
        price = 0;
    } else {
        if (age <= 12) {
            if (weekend) {
                price = 150;
            } else {
                price = 100;
            }
        } else {
            if (weekend) {
                price = 300;
            } else {
                price = 200;
            }
        }
    }

    cout << "Ticket price: Rs. " << price << endl;
    return 0;
}