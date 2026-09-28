#include <iostream>
#include <string>

using namespace std;
using namespace std;
int main() {
    int monthNumber;
    cout << "Enter month number (1-12): ";
    cin >> monthNumber;

    if (monthNumber == 1) {
        cout << "January" << endl;
    } else if (monthNumber == 2) {
        cout << "February" << endl;
    } else if (monthNumber == 3) {
        cout << "March" << endl;
    } else if (monthNumber == 4) {
        cout << "April" << endl;
    } else if (monthNumber == 5) {
        cout << "May" << endl;
    } else if (monthNumber == 6) {
        cout << "June" << endl;
    } else if (monthNumber == 7) {
        cout << "July" << endl;
    } else if (monthNumber == 8) {
        cout << "August" << endl;
    } else if (monthNumber == 9) {
        cout << "September" << endl;
    } else if (monthNumber == 10) {
        cout << "October" << endl;
    } else if (monthNumber == 11) {
        cout << "November" << endl;
    } else if (monthNumber == 12) {
        cout << "December" << endl;
    } else {
        cout << "Invalid month number! Please enter a number between 1 and 12." << endl;
    }

    return 0;
}
