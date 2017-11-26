#include<iostream.h>
#include"string"  
void main()  
{  
    char s1[100];  
    char s2[100];  
    int len1,len2;
    int i;  
    cout<<"ÇëÊäÈë×Ö·û´®1:"<<endl;  
    cin>>s1;  
    cout<<"ÇëÊäÈë×Ö·û´®2:"<<endl;  
    cin>>s2;
	len1=strlen(s1);  
    len2=strlen(s2);  
	for(i=0;i<=len2;i++)  
        s1[len1+i]=s2[i];
	cout<<s1<<endl;  
}