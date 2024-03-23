#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int dec,d,i,temp,ch;
	long int bin;
	do
	{
	dec=bin=d=i=0;	
	cout<<"\nEnter your choice (1/2/3)";
	cin>>ch;
	switch(ch)
	{
	case 1:
		cout<<"enter the decimal number:"<<endl;
		cin>>dec;
		temp=dec;
		while(dec!=0)
		{
		d=dec%2;
		bin+=d*pow(10,i);
		dec/=2;
		i++;
	    }
	    cout<<temp<<"in binary is"<<bin;break;
	case 2:
		cout<<"enter the Binary number:"<<endl;
		cin>>bin;
		temp=bin;
		while(bin!=0)
		{
		d=bin%10;
		dec+=d*pow(2,i);
		bin/=10;
	    }
	    cout<<temp<<"in decimal is"<<dec;
	    break;
	case 3: break;
	default : cout<<"Invalid";
    }
    }while(ch!=3);;
}

