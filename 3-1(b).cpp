#include <iostream.h>
void main()
{
	int x,i=0;
		cout<<"i=1,表示其数值小于10"<<endl
		<<"i=2,表示其数值10~99"<<endl
		<<"i=3,表示其数值100~999"<<endl
		<<"i>=4,表示其数值1000以上"<<endl
		<<"请输入 x:"<<endl;
	cin>>x;
	do
	{
		x=x/10;
		i=i+1;
	}while (x!=0);
	cout<<"i="<<i<<endl;
}




