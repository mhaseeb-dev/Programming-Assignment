#include<iostream>
using namespace std;
int main()
{
	long ap;
	cout<<"Enter 4 numbers in sequence :";
	cin>>ap;
	switch (ap)
	{
		case 1234:
			cout<<"You need int data type";
			break;
		case 0123:
		    cout<<"you need char data type";
		    break;
		    default:
		    	cout<<"invalid input";
	}
}
