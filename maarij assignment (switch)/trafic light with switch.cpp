#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char light;

    cout << "Enter traffic light signal (R for Red, Y for Yellow, G for Green): ";
    cin >> light;

    switch (light) {
        case 'R':
            cout << "Stop" << endl;
            break;
        case 'Y':
            cout << "Ready" << endl;
            break;
        case 'G':
            cout << "Go" << endl;
            break;
        default:
            cout << "Invalid input! Please enter R, Y, or G." << endl;
    }

    return 0;
}
