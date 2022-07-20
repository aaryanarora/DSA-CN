//Given a string S, remove consecutive duplicates from it recursively.

#include<iostream>
#include<string.h>
using namespace std;
void duplicate(char a[],int n)
{
	if(n==0)
	{
		return;
	}
	if(a[0]==a[1])
	{
		for(int i=0;i<n;i++)
		{
			a[i]=a[i+1];
		}
		a=a-1;
	}
	duplicate(a+1,n-1);
	
}
int main()
{
	char a[50];
	cin>>a;
	int n = strlen(a);
	duplicate(a,n);
	cout<<a;
}
