#include<iostream.h>
void main()
{
	int a[10],i,*max,*min;
	cout<<"������10������:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"�������"<<i+1<<"������:"<<endl;
		cin>>a[i];
	}
	cout<<"�����������Ϊ:"<<endl;
	for(i=0;i<10;i++)
		cout<<a[i]<<"   ";
	cout<<'\n';
	max=min=a;
	for(i=1;i<10;i++)
	{
		if(*max<a[i])
			max=a+i;
		else if(*min>a[i])min=a+i;
	}
	i=*min;*min=*max;*max=i;
	cout<<"�����������Ϊ:"<<endl;
	for(i=0;i<10;i++)
		cout<<a[i]<<"   ";
	cout<<'\n';
}
