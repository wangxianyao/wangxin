#include<iostream.h>
#include<iomanip.h>
void main()
{
	int a,b,c,d;
	cout<<"����������a��b"<<endl;
	cin>>a>>b;
	c=a%b;
	d=a/b;
	if(c==0)
		cout<<a<<"��"<<b<<"="<<d;
	else
	    cout<<a<<"��"<<b<<"="<<d<<"��"<<c<<endl;
}