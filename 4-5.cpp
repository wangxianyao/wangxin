#include <iostream.h>
void main()
{
	int a,i,k,j,z;
	i=0;j=10;
	for(a=2;a<=99;a++)
	{
		k=1;
		if(a>j)
			j=j*10;
		if((a*a)%j==a)
			k=1;
		else
			k=0;
		if(k)
		{
			cout<<"\t"<<a;
			i++;
			if(i%5==0)
				cout<<endl;
		}
	}
	if(i%5!=0)
		cout<<endl;
}
