#include<iostream>
using namespace std;
class add
{
	int num1,num2,sum;
	public:
		add()
		{ 
		cout<<"non parameterized";
		  num1=0,num2=0,sum=0;
		}
        add(int S1,int S2)
        {
        	cout<<"parameterized";
        	num1=S1,num2=S2;sum=0;
		}
		add(add &a)
		{
		cout<<"copy constructor";
		num1=a.num1;
		num2=a.num2;
		sum=0;
		}
		void getdata()
		{
			cout<<"enter data ";
			cin>>num1>>num2;
		}
		void addition()
		{
			sum=num1+num2;
        }
		void putdata()
		{
			cout<<"the numbers are"<<num1<<'\t'<<num2;
		}
	};
		main ()
		{
		add a,b(10,20),c(b);
		a.getdata();
		a.addition();
		cout<<"objeect a:";
		a.putdata();
		b.addition();
		cout<<"objeect b:";
		b.putdata();
		c.addition();
		cout<<"objeect c:";
		c.putdata();
	    }