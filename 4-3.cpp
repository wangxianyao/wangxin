#include <iostream.h>
void main()
{
	int n,i;
	i=0;
	cout<<"Please input n:"<<endl;
	cin>>n;
	while(n>1)
	{
		if(n%2==0)
			n=n/2;
		else
		    n=3*n+1;
		cout<<"→"<<n;
		i++;
		if(i%10==0)
			cout<<endl;
	}
	if(i%10!=0)
		cout<<endl;
	i=i-1;         /*书上的步骤数值和我数出来步骤数值少一个，不知道是不是计算方式不同，我先以书上的步骤数值为标准在这里减一*/
	cout<<"共有"<<i<<"个步骤"<<endl;
}


