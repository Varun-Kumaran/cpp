#include<iostream>
using namespace std;
void increase(int &x,int &y)
{
	x++;
	y++;
};
main()
{
int a,b;
cout<<"enter two variables";
cin>>a>>b;
increase(a,b);
cout<<"reference"<<a<<'\t'<<b;
}
