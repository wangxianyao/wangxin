#include<iostream.h>
#include"string"
void main()
{
    char a[100],b[100],*x,*y;
    int i;
    cout<<"�����ַ���a:"<<endl;
    gets(a);
    cout<<"�����ַ���b:"<<endl;
    gets(b);
    cout<<"���ַ���a���뵽�ַ���b�ĵڼ����ַ���:"<<endl;
    cin>>i;
    x=a;
    y=b+i;
    while(*x++);
    while((*x++=*y++)!='\0');
    x=a;
    y=b+i;
    while((*y=*x++)!='\0') y++;
    while((*y++=*x++)!='\0');
	cout<<"�޸ĺ���ַ���Ϊ:"<<endl;
    puts(b);
}