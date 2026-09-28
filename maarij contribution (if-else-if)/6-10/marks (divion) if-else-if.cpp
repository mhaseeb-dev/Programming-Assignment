#include <iostream>

using namespace std;

int main() {
    double obtainedMarks, totalMarks, percentage;

    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;

    cout << "Enter total marks: ";
    cin >> totalMarks;

    if (totalMarks <= 0) {
        cout << "Total marks must be greater than zero." << endl;
        return 0;
    }

    percentage = (obtainedMarks / totalMarks) * 100.0;

    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 60.0) {
        cout << "First Division" << endl;
    }
    else if (percentage >= 45.0) {
        cout << "Second Division" << endl;
    }
    else if (percentage >= 33.0) {
        cout << "Third Division" << endl;
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;
}
