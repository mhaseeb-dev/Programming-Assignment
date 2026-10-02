#include <iostream>
using namespace std;

int main() {
    int maths, physics, chemistry, total;
    cout << "Enter Maths, Physics and Chemistry marks: ";
    cin >> maths >> physics >> chemistry;

    if (maths >= 60) {
        if (physics >= 50) {
            if (chemistry >= 50) {
                total = maths + physics + chemistry;
                if (total >= 200) {
                    cout << "Eligible for admission. Total: " << total << endl;
                } else {
                    cout << "Not eligible: total below 200" << endl;
                }
            } else {
                cout << "Not eligible: Chemistry below 50" << endl;
            }
        } else {
            cout << "Not eligible: Physics below 50" << endl;
        }
    } else {
        cout << "Not eligible: Maths below 60" << endl;
    }
    return 0;
}