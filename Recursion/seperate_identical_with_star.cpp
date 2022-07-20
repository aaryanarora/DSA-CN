//Given a string S, compute recursively a new string where identical 
//chars that are adjacent in the original string are separated from each other by a "*".

#include<iostream>
#include<string.h>
using namespace std;
void addstar(char a[])
{
	if(a[0]=='\0')
	{
		return;
	}
	if(a[0]==a[1])
	{
		for(int i=strlen(a);i>=1;i--)
		{
			a[i+1]=a[i];
		}
		a[1] = '*';
		a=a+1;
	}
	addstar(a+1);
}
int main()
{
	char a[50];
	cin>>a;
	addstar(a);
	cout<<a;
}
