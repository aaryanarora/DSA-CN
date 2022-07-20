//Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
//Do this recursively.
//Input Format :
//Line 1 : Input String S
//Line 2 : Character c1 and c2 (separated by space)

#include<iostream>
#include<string.h>
using namespace std;
void replace(char a[],char r,char w,int n)
{
	if(n==0)
	{
		return;
	}
	if(a[0]==r)
	{
		a[0] = w;
	}
	replace(a+1,r,w,n-1);
}
int main()
{
	char a[50],r,w;
	cin>>a;
	cin>>r;
	cin>>w;
	int n = strlen(a);
	replace(a,r,w,n);
	cout<<a;
}
