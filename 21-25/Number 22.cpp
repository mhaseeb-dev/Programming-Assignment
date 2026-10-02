#include<iostream> 
using namespace std;
int main()
 {
int n;
cout << "Enter N: ";
cin >> n;
for (int i = 1; i <= n; i++) {
if (i % 5 == 0) {
cout << "Five";
} else {
cout << i;
}
cout << " ";
}
cout << endl;
return 0;
}