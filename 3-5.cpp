#include<iostream.h>
#include"math.h"
void main()
{
	int a,b,c,p,s;
	cout<<"������3����"<<endl;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"��3����Ϊ�߳������������Ϊ"<<s<<endl;
}