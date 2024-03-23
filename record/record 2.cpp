#include<iostream>
using namespace std;
main()
{
	float percent;
	int x;
	cout<<"Enter your percentage:\t";
	cin>>percent;
	cout<<"\nyou have scored:"<<percent<<'%';
	x=percent/10;
	switch(x)
	{
		case 10:
		case 9:
		case 8: cout<<"\nyou have passed with Division";
		break;
		case 7:
		case 6: cout<<"\nyou have passed with Distinctio";
		break;
	    case 5: cout<<"\nyou have passed with first division";
		break; 
	    case 4: cout<<"\nyou have passed with second division";
		break;
	    default: cout<<"\nyou have failed";
	}
}
	
