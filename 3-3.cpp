#include<iostream.h>
void main()
{
	int a,b,n;
	cout<<"ÇëÊäÈëÕûÊýn:"<<endl;
	cin>>n;
	a=n%3;
	b=n%7;
	if(a==0||b==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
}