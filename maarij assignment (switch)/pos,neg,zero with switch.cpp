#include <iostream>

using namespace std;

int main() {
    int num;
    cout<<"Enter number"<<endl;
    cin >> num;

    switch ((num > 0) - (num < 0)) {
        case 1:
            cout << "Positive" << endl;
            break;
        case -1:
            cout << "Negative" << endl;
            break;
        case 0:
            cout << "Zero" << endl;
            break;
    }

    return 0;
}
