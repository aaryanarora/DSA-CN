//You have been given a random integer array/list(ARR) of size N. 
//Write a function that rotates the given array/list by D elements(towards the left).
//Note:
//Change in the input array/list itself. You don't need to return or print the elements.

#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int n,int s,int e)
{
	int *temp = new int[e-s];
	
	for(int i=s;i<e;i++)
	{
		temp[i] = a[e-i-1];
	}
	for(int i=s;i<e;i++)
	{
		a[i]=temp[i];
	}
	
	delete temp;
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
	reverse(a,n,0,n);
	reverse(a,n,0,n-num);
	reverse(a+(n-num),n,0,num);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}


