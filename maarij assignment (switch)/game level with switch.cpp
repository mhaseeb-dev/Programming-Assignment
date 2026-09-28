#include <iostream>

using namespace std;

int main() {
    int choice;
    cout << "Select Game Level:\n";
    cout << "1. Easy\n";
    cout << "2. Medium\n";
    cout << "3. Hard\n";
    cout << "4. Expert\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Easy level. Get ready for a relaxed game!\n";
            break;
        case 2:
            cout << "You selected Medium level. Challenge accepted!\n";
            break;
        case 3:
            cout << "You selected Hard level. Prepare for a tough challenge!\n";
            break;
        case 4:
            cout << "You selected Expert level. Only masters survive!\n";
            break;
        default:
            cout << "Invalid choice! Please select between 1 and 4.\n";
            break;
    }

    return 0;
}
