//You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
//Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
//You need to find and return that number which is unique in the array/list.
//Note:
//Unique element is always present in the array/list according to the given condition.

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int c=a[0];
	for(int i=1;i<n;i++)
	{
		c=c^a[i];
	}
	cout<<c;
}
