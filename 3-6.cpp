#include<iostream.h>
#include<iomanip.h>
void main()
{
	cout<<"������Բ�İ뾶r��һ��������k"<<endl;
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
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<"Բ�����Ϊ:"<<setw(8)<<s<<endl;break;
	case 2:
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<"Բ�����Ϊ:"<<setw(8)<<s<<endl<<"Բ���ܳ�Ϊ:"<<setw(8)<<l<<endl;break;
	case 3:
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<"Բ���ܳ�Ϊ:"<<setw(8)<<l<<endl;break;
	}
}