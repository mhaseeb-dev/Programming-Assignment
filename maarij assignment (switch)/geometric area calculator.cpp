#include <iostream>

using namespace std;

int main() {
    int choice;
    double area, radius, length, width, base, height, side;

    cout << " Geometric Area Calculator " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Square" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "The area of the circle is: " << area << endl;
            break;

        case 2:
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
            break;

        case 3:
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "The area of the triangle is: " << area << endl;
            break;

        case 4:
            cout << "Enter the side length of the square: ";
            cin >> side;
            area = side * side;
            cout << "The area of the square is: " << area << endl;
            break;

        default:
            cout << "Invalid choice! Please select a number between 1 and 4." << endl;
            break;
    }

    return 0;
}
