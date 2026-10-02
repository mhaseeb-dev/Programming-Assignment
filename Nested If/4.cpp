#include<iostream>
using namespace std;

int main() 
{
    string username, password;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == "admin") {
        if (password == "1234") {
            cout << "Login successful" << endl;
        } else {
            cout << "Incorrect password" << endl;
        }
    } else {
        cout << "Unknown username" << endl;
    }
    return 0;
}