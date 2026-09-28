#include<iostream> 
using namespace std;
int main() 
{
int n;
long long product = 1;
cout << "Enter N: ";
cin >> n;
for (int i = 2; i <= n; i += 2) {
product *= i;
}
cout << "Product of even numbers = " << product << endl;
return 0;
}