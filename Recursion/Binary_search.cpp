//Given an integer sorted array (sorted in increasing order) and an element x, 
//find the x in given array using binary search. Return the index of x.
//Return -1 if x is not present in the given array.
//Note : If given array size is even, take first mid.

#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int s,int e,int num)
{
	int x;
	if(s>e)
	{
		return -1;
	}
	int mid = (s+e)/2;
	if(a[mid]==num)
	{
		return mid;
	}
	if(a[mid]>num)
	{
		 x = binary(a,s,mid-1,num);
	}
	else if(a[mid]<num)
	{
		 x = binary(a,mid+1,e,num);
	}
	return x;
	
}
int main()
{
	int n,num;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>num;
	
	cout<<binary(a,0,n-1,num);
}
