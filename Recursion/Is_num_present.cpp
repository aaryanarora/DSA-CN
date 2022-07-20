//Given an array of length N and an integer x, you need to find
//if x is present in the array or not. Return true or false.
//Do this recursively.
#include<iostream>
using namespace std;

bool isnum(int a[],int n,int num)
{
	if(n == 0)
	{
		return false;
	}
	if(a[0]==num)
	{
		return true;
	}
	
	return isnum(a+1,n-1,num);
}

int main()
{
	int n,a[50],num;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>num;
	cout<<isnum(a,n,num);
}
