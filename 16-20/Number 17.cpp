#include<iostream> 
using namespace std;
int main() 
{
int n, x, num, count = 0;
cout << "How many numbers to enter? ";
cin >> n;
cout << "Enter X: ";
cin >> x;
for (int i = 0; i < n; i++) {
cout << "Enter number " << i + 1 << ": ";
cin >> num;
if (num > x) {
count++;
}
}
cout << "Count of numbers > " << x << " is: " << count << endl;
return 0;
}
