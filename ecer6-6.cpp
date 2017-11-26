#include<iostream.h>
void main()
{
	int n,a,b=0;
	cout<<"输入一个正整数:"<<endl;
	cin>>n;
	for(a=n;a>0;)
	{
		b=b*10+a%10;
		a=a/10;
	}
	if(b==n)
	{
		cout<<"是!!!"<<endl;
	}
	else
	{
		cout<<"不是!!!"<<endl;
	}
}