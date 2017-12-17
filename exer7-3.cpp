#include<iostream.h>
void main()
{
	int a[10],i,*max,*min;
	cout<<"请输入10个整数:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"请输入第"<<i+1<<"个整数:"<<endl;
		cin>>a[i];
	}
	cout<<"所输入的数组为:"<<endl;
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
	cout<<"调整后的数组为:"<<endl;
	for(i=0;i<10;i++)
		cout<<a[i]<<"   ";
	cout<<'\n';
}
