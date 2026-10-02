#include <iostream>

using namespace std;

int main() {
    double temperature;
    cout<<"enter temperature : "<<endl;
    cin >> temperature;

    if (temperature < 0) {
        cout << "very cold";
    } 
    else if (temperature <= 15) {
        cout << "cold";
    } 
    else if (temperature <= 25) {
        cout << "normal";
    } 
    else if (temperature <= 35) {
        cout << "hot";
    } 
    else {
        cout << "very hot";
    }

    return 0;
}
