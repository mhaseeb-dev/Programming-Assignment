#include<iostream> 
using namespace std;
int main() 
{
int n, count = 0;
cout << "Enter N: ";
cin >> n;
for (int i = 1; i <= n; i++) {
if (i % 2 == 0 && i % 3 != 0) {
count++;
}
}
cout << "Count = " << count << endl;
return 0;
}