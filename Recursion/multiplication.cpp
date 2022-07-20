//Given two integers M & N, calculate and return their multiplication using recursion. 
//You can only use subtraction and addition for your 
//calculation. No other operators are allowed.
#include<iostream>
using namespace std;

int mult(int x,int n)
{
	if(n==0)
	{
		return 0;
	}
	
	return x+mult(x,n-1);
}
int main()
{
	int x,n;
	cin>>x;
	cin>>n;
	cout<<mult(x,n);
}
