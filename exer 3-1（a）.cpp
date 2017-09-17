#include<iostream.h>
 void main()
 {
	 int n;
	 cout<<"请输入n:";
	 cin>>n;
      if(n<10)
		  cout<<"其数值小于10"<<endl;
	  else
		  if(10<=n&&n<99)
			  cout<<"其数值属于10~99"<<endl;
		  else
			  if(100<=n&&n<999)
				  cout<<"其数值属于100~999"<<endl;
			  else
				  cout<<"其数值大于1000"<<endl;
 }


