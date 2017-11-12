#include<iostream.h>
void fun(int);
int n=0;
void main()
{
	int i,m;
	cout<<"请输入一个整数:";
	cin>>m;
	cout<<"1到"<<m<<"之间能被7或者11整除的数有:"<<endl;
	for (i=1;i<=m;i++)
	{
		fun(i);
	}
	cout<<endl<<"共有"<<"n="<<n<<"个。"<<endl; 
}
void fun(int j)
{
	if(j%7==0||j%11==0)
	{
		n+=1;
	cout<<j<<" ";
	}
}


