#include <iostream.h>
void main()
{
	int x,i=0;
		cout<<"i=1,��ʾ����ֵС��10"<<endl
		<<"i=2,��ʾ����ֵ10~99"<<endl
		<<"i=3,��ʾ����ֵ100~999"<<endl
		<<"i>=4,��ʾ����ֵ1000����"<<endl
		<<"������ x:"<<endl;
	cin>>x;
	do
	{
		x=x/10;
		i=i+1;
	}while (x!=0);
	cout<<"i="<<i<<endl;
}




