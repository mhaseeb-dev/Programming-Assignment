#include<iostream> 
using namespace std;
int main()
 {
int n, num, smallest;
cout << "How many numbers? ";
cin >> n;
cout << "Enter number 1: ";
cin >> smallest;
for (int i = 2; i <= n; i++) {
cout << "Enter number " << i << ": ";
cin >> num;
if (num < smallest) {
smallest = num;
}
}
cout << "Smallest = " << smallest << endl;
return 0;
}