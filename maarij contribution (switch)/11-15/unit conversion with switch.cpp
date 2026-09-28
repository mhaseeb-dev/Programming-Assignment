#include <iostream>

using namespace std;

int main() {
    int choice;
    double value, result;

    cout << "1. Kilometers to Meters\n";
    cout << "2. Meters to Centimeters\n";
    cout << "3. Kilograms to Grams\n";
    cout << "4. Hours to Minutes\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter kilometers: ";
            cin >> value;
            result = value * 1000;
            cout << value << " Kilometers = " << result << " Meters" << endl;
            break;
        case 2:
            cout << "Enter meters: ";
            cin >> value;
            result = value * 100;
            cout << value << " Meters = " << result << " Centimeters" << endl;
            break;
        case 3:
            cout << "Enter kilograms: ";
            cin >> value;
            result = value * 1000;
            cout << value << " Kilograms = " << result << " Grams" << endl;
            break;
        case 4:
            cout << "Enter hours: ";
            cin >> value;
            result = value * 60;
            cout << value << " Hours = " << result << " Minutes" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
