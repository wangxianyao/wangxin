#include<iostream.h>
void main()
{
	int a[10],temp,i=1;
	int *p,*q;
	cout<<"����������ʮ������:"<<endl;
	for(p=a;p<a+10;p++)
	{
		cout<<"�������"<<i<<"����:"<<endl;
		cin>>*p;
		i++;
	}
	for(p=a,q=a+9;p<q;p++,q--)
	{temp=*p;
  	*p=*q;
  	*q=temp;
	}
	cout<<"�������������Ϊ:"<<endl;
	for(p=a;p<a+10;p++)
		cout<<*p<<"   ";
	cout<<'\n';
}