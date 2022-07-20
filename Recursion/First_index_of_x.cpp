//Given an array of length N and an integer x, you need to find 
//and return the first index of integer x present in the array. 
//Return -1 if it is not present in the array.First index means, 
//the index of first occurrence of x in the input array.
//Do this recursively. Indexing in the array starts from 0.

#include<iostream>
using namespace std;


int findex(int a[],int n,int num,int c)
{
	if(n==0)
	{
		return -1;
	}
	if(a[0]==num)
	{
		return c;
	}
	
	return findex(a+1,n-1,num,c+1);
	
}
int main()
{
	int n,a[50],num,c=0;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>num;
	cout<<findex(a,n,num,c);	
}
