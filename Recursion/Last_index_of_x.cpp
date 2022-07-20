//Given an array of length N and an integer x, you need to find 
//and return the last index of integer x present in the array. 
//Return -1 if it is not present in the array.Last index means 
//- if x is present multiple times in the array, return 
//the index at which x comes last in the array.
//You should start traversing your array from 0, not from (N - 1).
//Do this recursively. Indexing in the array starts from 0.

#include<iostream>
using namespace std;


int lindex(int a[],int tn,int n,int num,int c)
{
	if(n==tn)
	{
		return -1;
	}
	if(a[0]==num)
	{
		return c;
	}
	
	return lindex(a-1,tn,n+1,num,c-1);
	
}
int main()
{
	int n,a[50],num;
	cin>>n;
	int c=n-1;
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>num;
	cout<<lindex(a+n-1,n,1,num,c);	
}
