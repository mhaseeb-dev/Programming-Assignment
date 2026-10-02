#include <iostream>
using namespace std;

int main() 
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) {
        if (marks >= 40) {
            cout << "Pass" << endl;
            if (marks >= 90) {
                cout << "Grade A" << endl;
            } else if (marks >= 75) {
                cout << "Grade B" << endl;
            } else if (marks >= 60) {
                cout << "Grade C" << endl;
            } else {
                cout << "Grade D" << endl;
            }
        } else {
            cout << "Fail" << endl;
        }
    } else {
        cout << "Invalid marks" << endl;
    }
    return 0;
}