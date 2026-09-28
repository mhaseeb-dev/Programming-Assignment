#include<iostream> 
using namespace std;
int main() 
{
int n, num, largest;
cout << "How many numbers? ";
cin >> n;
cout << "Enter number 1: ";
cin >> largest;
for (int i = 2; i <= n; i++) {
cout << "Enter number " << i << ": ";
cin >> num;
if (num > largest) {
largest = num;
}
}
cout << "Largest = " << largest << endl;
return 0;
}