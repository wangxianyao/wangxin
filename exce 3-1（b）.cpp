#include<iostream.h>
 void main()
{
	int n;
	cout<<"请输入n:";
	cin>>n;
	switch(n/100)
	{
	case 0: if(0<n&&n<10)
				cout<<"其数值小于10";
		else
			cout<<"其数值属于10~99";break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:cout<<"其数值属于100~999";break;
	default:cout<<"其数值在1000以上";
	}
}




