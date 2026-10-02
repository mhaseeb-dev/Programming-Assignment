#include<iostream>
using namespace std;
int main()
{
	char inp;
	cout<<"Enter Alphabet :"<<endl;
	cin>>inp;
	switch(inp)
	{
	case 'A':
	case'a':
    case'E':
    case'e':
    case'I':
    case'i':
    case'O':
    case'o':
    case'U':
    case'u':
		cout<<"You entered a vowel"<<endl;
		break;
	default:	
		cout<<"you Entered consonant ";}
}
