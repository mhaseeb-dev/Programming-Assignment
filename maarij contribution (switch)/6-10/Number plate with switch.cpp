#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter first alphabet of your number plate in uppercase : ";
	cin>>a;
	switch(a)
	{
		case 'L':
		cout<<"Lahore";
		break;
		case'F':
		cout<<"Faisalabad";
		break;
		case'K':
		cout<<"Karachi";
		break;
		default:
			cout<<"Try again";
	}
	return 0;
}
