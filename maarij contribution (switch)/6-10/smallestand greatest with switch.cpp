#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	char c;
	cout<<"Enter first number :"<<endl;
	cin>>a;
	cout<<"enter second number :"<<endl;
	cin>>b;
	cout<<"press G for greatest or press S : ";
	cin>>c;
	switch(c)
	{
	case 'G':
		if(a>b)
		cout<<"greater ="<<a;
		else
		cout<<"greater ="<<b;
		break;
	case 'S':
	    if(a<b)
		cout<<"smallest ="<<a<<endl;
		else
		cout<<"smallest ="<<b;
		default:
		cout<<"invalid input";	}
}
