#include <iostream>
using namespace std;

int main() {
    float x, y;
    char inp; 
    
    cout << "Enter first number: ";
    cin >> x;
    
    cout << "Enter second number: ";
    cin >> y;
    
    cout << "Enter arithmetic operator (+, -, *, /): ";
    cin >> inp;
    
    switch(inp) {
        case '+':
            cout << "Sum = " << x + y << endl;
            break;
        case '-':
            cout << "Subtract = " << x - y << endl;
            break;
        case '*':
            cout << "Product = " << x * y << endl;
            break;
        case '/':
            if (y != 0) {
                cout << "Division = " << x / y << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid input operator!" << endl;
    }
        
    return 0;	
}
