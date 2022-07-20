//Check whether a given String S is a palindrome using recursion. Return true or false.

#include<iostream>
#include<string.h>
using namespace std;
bool palind(char a[],int n,int mid)
{
	if(mid==0)
	{
		return true;
	}
	if(a[0]!=a[n-1])
	{
		return false;
	}
	return palind(a+1,n-2,mid-1);
	
}
int main()
{
	char a[50];
	cin>>a;
	int n=strlen(a);
	int mid=n/2;
	cout<<palind(a,n,mid);
}
