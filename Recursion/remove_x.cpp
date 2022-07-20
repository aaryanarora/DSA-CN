//Given a string, compute recursively a new string where all 'x' chars have been removed.
#include<iostream>
#include<string.h>
using namespace std;
void remx(char a[])
{
	if(a[0]=='\0')
	{
		return;
	}
	if(a[0]=='x')
	{
		for(int i=0;i<strlen(a);i++)
		{
			a[i]=a[i+1];
		}
		a=a-1;
	}
	remx(a+1);
}
int main()
{
	char a[50];
	cin>>a;
	remx(a);
	cout<<a;
}
