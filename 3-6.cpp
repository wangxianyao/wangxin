#include<iostream.h>
#include<iomanip.h>
void main()
{
	cout<<"请输入圆的半径r和一个整型数k"<<endl;
	float r,l,s,pi;
	cin>>r;
	int k;
	cin>>k;
	pi=3.14159;
	l=2*pi*r;
	s=pi*r*r;
	switch(k)
	{
	case 1:
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<"圆的面积为:"<<setw(8)<<s<<endl;break;
	case 2:
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<"圆的面积为:"<<setw(8)<<s<<endl<<"圆的周长为:"<<setw(8)<<l<<endl;break;
	case 3:
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<"圆的周长为:"<<setw(8)<<l<<endl;break;
	}
}