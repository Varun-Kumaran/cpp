#include<iostream>
using namespace std;
class V
{
	int x;
	float y;
	public:
	V(int p,float q)
	{ 
	x=p;
	y=q;
	}
	void display()
	{ 
	cout<<"\n height:"<<x;
	cout<<"\n weight:"<<y;
	}
};
main()
{
	int a;
	float b;
	cout<<"enter height:";
	cin>>a;
	cout<<"enter weight:";
	cin>>b;
	V v (a,b);
	v.display();	
}
