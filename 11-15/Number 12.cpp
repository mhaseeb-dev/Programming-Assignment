#include<iostream> 
using namespace std;
int main() 
{
int n;
long long product = 1;
cout << "Enter N: ";
cin >> n;
for (int i = 1; i <= n; i++) {
product *= i;
}
cout << "Product = " << product << endl;
return 0;
}