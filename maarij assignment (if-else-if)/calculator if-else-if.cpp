#include <iostream>
using namespace std;
int main() {
    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    }
    else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    }
    else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2;
    }
    else if (op == '/') {
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        } else {
            cout << "Error! Division by zero.";
        }
    }
    else {
        cout << "Error! Invalid operator.";
    }

    cout << std::endl;
    return 0;
}
