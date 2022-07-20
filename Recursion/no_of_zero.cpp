//Given an integer N, count and return the number of zeros that 
//are present in the given integer using recursion.

#include<iostream>
using namespace std;

int nzero(int x,int c)
{
	if(x==0)
	{
		return c;
	}
	if(x%10 == 0)
	{
		c++;
	}
	return nzero(x/10,c);
}

int main()
{
	int x,c=0;
	cin>>x;
	cout<<nzero(x,c);
}
