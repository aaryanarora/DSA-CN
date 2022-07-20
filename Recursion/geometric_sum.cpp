//Given k, find the geometric sum i.e.
//1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)
//using recursion.

#include<iostream>
using namespace std;

float power(float x,float n)
{
	if(n==0)
	{
		return 1;
	}
	float out = x * power(x,n-1);
	return out;  
}
float gm(float x)
{
	if(x==0)
	{
		return 1;
	}
	
	
	return (power(0.5,x) + gm(x-1));
}
int main()
{
	float x;
	cin>>x;
	cout<<gm(x);
}
