//You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) 
//and then rotated by some number 'K' in the clockwise direction.
//Your task is to write a function that returns the value of 'K', that means, 
//the index from which the array/list has been rotated.
//Input format :
//The first line contains an Integer 't' which denotes the number of test cases 
//or queries to be run. Then the test cases follow.
//
//First line of each test case or query contains an integer 'N' representing the size of the array/list.
//
//Second line contains 'N' single space separated integers representing the elements in the array/list.

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
void shift(int a[],int n,int num)
{
	reverse(a,n,0,n);
	reverse(a,n,0,n-num);
	reverse(a+(n-num),n,0,num);
}
int main()
{
	int n;
	cin>>n;
	int c=0;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	while(a[0]>=a[n-1])
	{
		shift(a,n,1);
		c++;
	}
	cout<<c;
	delete a; 
}
