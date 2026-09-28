#include<iostream> 
using namespace std;
int main() 
{
int n;
long long sum = 0;
cout << "Enter N: ";
cin >> n;
for (int i = 1; i <= n; i++) {
sum += (long long)i * i * i;
}
cout << "Sum of cubes = " << sum << endl;
return 0;
}
