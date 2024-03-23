#include<iostream>
using namespace std;
int factorial(int n)
{
	if (n==0)
	return 1;
	else
	return n*factorial(n-1);
}
main()
{
	int m;
	cout<<"enter the number: ";
	cin>>m;
    cout<<"the factorial: "<<factorial(m);
}