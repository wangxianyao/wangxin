#include<iostream.h>
void main()
{
	int n,a,b=0;
	cout<<"����һ��������:"<<endl;
	cin>>n;
	for(a=n;a>0;)
	{
		b=b*10+a%10;
		a=a/10;
	}
	if(b==n)
	{
		cout<<"��!!!"<<endl;
	}
	else
	{
		cout<<"����!!!"<<endl;
	}
}