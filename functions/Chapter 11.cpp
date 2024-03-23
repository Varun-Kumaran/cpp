#include<iostream>
using namespace std;
#include<ctype.h>
main()
{
	int an,a,n,u,l;
	char ch,tu,tl;
	cout<<"enter a character: ";
	cin>>ch;
	an=isalnum(ch);
	cout<<"\nthe return value of isalum is "<<an;
	a=isalpha(ch);
	cout<<"\nthe return value of isalpha is "<<a;
	n=isdigit(ch);
	cout<<"\nthe return value of isdigit is "<<n;
	u=isupper(ch);
	cout<<"\nthe return value of isupper is "<<u;
	l=islower(ch);
	cout<<"\nthe return value of islower is "<<l;	
	tu=toupper(ch);
	cout<<"\nthe upper alphabet is "<<tu;
	tl=tolower(ch);
	cout<<"\nthe lower alphabet is "<<tl;
}