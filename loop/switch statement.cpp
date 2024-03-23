#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"guess a number between 1-100";
	cin>>n;

	switch (n)
	{
	case 21 : cout<<"21 got it right";break;
    case 12 : cout<<"12 got it right";break;
    case 93 : cout<<"93 got it right";break;
    case 74 : cout<<"74 got it right";break;
    case 51 : cout<<"51 got it right";break;
    default : cout<<"missed it";break;
    
	}
}