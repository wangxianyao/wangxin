#include<iostream.h>
#include<iomanip.h>
#define N 4
#define M 4
void main()
{
	int i,j,s=0,a[N][M];
	cout<<"请输入矩阵:"<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			cin>>a[i][j];
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			if(i==j)
				s+=a[i][j];
			else
				a[i][j]+=1;
	}
	cout<<"矩阵主对角线之和为:"<<s<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			cout<<setw(4)<<a[i][j];
		cout<<"\n";
	}
}
