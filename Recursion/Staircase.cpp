//A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 
//steps at a time. Implement a method to count how many possible ways the 
//child can run up to the stairs. You need to return number of possible ways W.

#include<bits/stdc++.h>
using namespace std;
int stairs(int x)
{
	int a,b,c;
	if(x==0)
	{
		return 1;
	}
	if(x<0)
	{
		return 0;
	}
	
	a = stairs(x-1);
	b = stairs(x-2);
	c = stairs(x-3);
	
	
	return (a+b+c);
}
int main()
{
	int x;
	cin>>x;
	cout<<stairs(x);
}
