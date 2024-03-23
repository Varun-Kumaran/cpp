#include <iostream>
using namespace std;
main()
{
	int F,E,M,P,C,CS,Total,Average;
    cout<<"\n enter the marks";
	cin>>F>>E>>M>>P>>C>>CS;
	Total=F+E+M+P+C+CS;
	cout<<"\n Total="<<Total;
	Average=(F+E+M+P+C+CS)/6;
	cout<<"\n Average="<<Average;
}