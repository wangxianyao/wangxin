#include<iostream.h>
void fun(int);
int n=0;
void main()
{
	int i,m;
	cout<<"������һ������:";
	cin>>m;
	cout<<"1��"<<m<<"֮���ܱ�7����11����������:"<<endl;
	for (i=1;i<=m;i++)
	{
		fun(i);
	}
	cout<<endl<<"����"<<"n="<<n<<"����"<<endl; 
}
void fun(int j)
{
	if(j%7==0||j%11==0)
	{
		n+=1;
	cout<<j<<" ";
	}
}


