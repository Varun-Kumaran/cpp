#include<iostream>
#include<stdlib.h>
using namespace std;
void Primechk (int a)
{
	if(a==0||a==1)
	cout<<"NEITHER PRIME NOR COMPOSITE";
	else
	{
		for(int j=2;j<a;j++)
		{
			if (a%j==0)
			cout<<"COMPOSITE";
			break;
		}
		if (a==j)
		cout<<"PRIME";
	}
}
void fibo(int n)
{
	int a=-1,b=1,c=0;
	for (int i=1;i,=n,i++)
	{
		c=a+b
		cout<<c;
		Primechk(c)
		a=b;
		b=c;
	}
}
main()
{
	int n;
	cout<<"ENTER THE NUMBER OF REQUIRED FIBO TERMS";
	cin>>n;
	cout<<"FIBONACCI SERIES";
	fibo(n);
}