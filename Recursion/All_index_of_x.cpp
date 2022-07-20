//Given an array of length N and an integer x, you need to 
//find all the indexes where x is present in the input array. 
//Save all the indexes in an array (in increasing order).
//Do this recursively. Indexing in the array starts from 0.

#include<iostream>
using namespace std;


void allindex(int a[],int n,int num,int c)
{
	static int count =0;
	if(n==0)
	{
		if(count==0)
		{
		cout<<-1;
		return;
		}
		else
		{
			return;
		}
	}
	if(a[0]==num)
	{
		cout<<c<<" ";
		count++;
	}
	
	allindex(a+1,n-1,num,c+1);
	
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
	allindex(a,n,num,c);	
}
