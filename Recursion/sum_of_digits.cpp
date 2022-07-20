//Write a recursive function that returns the sum of the digits of a given integer.

#include<iostream>
using namespace std;

int digsum(int x)
{
	if(x==0)
	{
		return 0;
	}
	return ((x%10)+digsum(x/10));
}

int main()
{
	int x;
	cin>>x;
	cout<<digsum(x);
}
