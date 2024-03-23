#include<iostream>
using namespace std;
main()
{
	float basic,hra,da,gross;
	cout<<"enter basic salary of the empolyee";
	cin>>basic;
	if(basic<25000)
	{
		hra=basic*20/100;
		da=basic*80/100;
	}
	else if(basic>=25000 && basic<40000)
	{
		hra=basic*25/100;
		da=basic*90/100;
	}
	else
	{
		hra=basic*30/100;
		da=basic*95/100;
    }
	cout<<"\nbasic salary:"<<basic;
	cout<<"\nhome rent allowance:"<<hra;
    cout<<"\ndearness allowance:"<<da;
    gross=basic+hra+da;
    cout<<"\n\tgross salary:"<<gross;
}