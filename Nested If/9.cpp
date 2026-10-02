#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, r1, r2;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    if (a != 0) {
        d = b * b - 4 * a * c;
        if (d > 0) {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            cout << "Real and distinct roots: " << r1 << " and " << r2 << endl;
        } else {
            if (d == 0) {
                cout << "Real and equal roots: " << -b / (2 * a) << endl;
            } else {
                cout << "Roots are complex (no real roots)" << endl;
            }
        }
    } else {
        cout << "Not a quadratic equation" << endl;
    }
    return 0;
}