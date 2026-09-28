#include<iostream>
using namespace std;
int main()
{
	long a;
	cout<<"Enter first 4 digits of your CNIC :";
	cin>>a;
	switch(a)
	{
		case 3520:
			cout<<"Lahore";
			break;
		case 3560:
			cout<<"sialkot";
			break;
			default:
				cout<<"invalid";
	}
	return 0;
}
