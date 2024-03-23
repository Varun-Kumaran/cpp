#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter 3 values:";
	cin>>a>>b>>c;
	if(a>b&a>c)
	cout<<"a is greater";
	else if(b>c)
	cout<<"b is greater";
	else
	cout<<"c is greater"; 
}