#include<iostream.h>
void main()
{
	int a[10],temp,i=1;
	int *p,*q;
	cout<<"请依次输入十个整数:"<<endl;
	for(p=a;p<a+10;p++)
	{
		cout<<"请输入第"<<i<<"个数:"<<endl;
		cin>>*p;
		i++;
	}
	for(p=a,q=a+9;p<q;p++,q--)
	{temp=*p;
  	*p=*q;
  	*q=temp;
	}
	cout<<"反序输出的数组为:"<<endl;
	for(p=a;p<a+10;p++)
		cout<<*p<<"   ";
	cout<<'\n';
}