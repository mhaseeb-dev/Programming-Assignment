#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        cout << "Zero" << endl;
    } else {
        if (n > 0) {
            if (n % 2 == 0) {
                cout << "Positive even" << endl;
            } else {
                cout << "Positive odd" << endl;
            }
        } else {
            if (n % 2 == 0) {
                cout << "Negative even" << endl;
            } else {
                cout << "Negative odd" << endl;
            }
        }
    }
    return 0;
}