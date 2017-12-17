#include<iostream.h>
#include"string"
void main()
{
    char a[100],b[100],*x,*y;
    int i;
    cout<<"输入字符串a:"<<endl;
    gets(a);
    cout<<"输入字符串b:"<<endl;
    gets(b);
    cout<<"将字符串a插入到字符串b的第几个字符后:"<<endl;
    cin>>i;
    x=a;
    y=b+i;
    while(*x++);
    while((*x++=*y++)!='\0');
    x=a;
    y=b+i;
    while((*y=*x++)!='\0') y++;
    while((*y++=*x++)!='\0');
	cout<<"修改后的字符串为:"<<endl;
    puts(b);
}