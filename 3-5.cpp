#include<iostream.h>
#include"math.h"
void main()
{
	int a,b,c,p,s;
	cout<<"请输入3个数"<<endl;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"这3个数为边长的三角形面积为"<<s<<endl;
}