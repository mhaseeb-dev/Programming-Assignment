#include<iostream> 
using namespace std;
int main() 
{
int n, sum = 0, count = 0, i = 2;
cout << "Enter N: ";
cin >> n;
while (count < n) {
sum += i;
i += 2;
count++;
}
cout << "Sum = " << sum << endl;
return 0;
}
