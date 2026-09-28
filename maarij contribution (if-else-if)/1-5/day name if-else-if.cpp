#include <iostream>
using namespace std;
int main() {
    int dayNumber;
    std::cout << "Enter a day number (1-7): ";
    std::cin >> dayNumber;

    if (dayNumber == 1) {
        cout << "Monday" << std::endl;
    } else if (dayNumber == 2) {
        cout << "Tuesday" << std::endl;
    } else if (dayNumber == 3) {
        cout << "Wednesday" << std::endl;
    } else if (dayNumber == 4) {
        cout << "Thursday" << std::endl;
    } else if (dayNumber == 5) {
        cout << "Friday" << std::endl;
    } else if (dayNumber == 6) {
        cout << "Saturday" << std::endl;
    } else if (dayNumber == 7) {
        cout << "Sunday" << std::endl;
    } else {
        cout << "Invalid day number! Please enter a number between 1 and 7." << std::endl;
    }

    return 0;
}
