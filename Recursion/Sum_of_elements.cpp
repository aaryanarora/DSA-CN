//Given an array of length N, you need to find and return the sum of all elements of the array.
//Do this recursively.

#include<iostream>
using namespace std;

int arrsum(int a[],int n)
{
	if(n==0)
	{
		return 0;
	}
	return (a[0] + arrsum(a+1,n-1));
}
int main()
{
	int n,a[50];
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<arrsum(a,n);
	
}
