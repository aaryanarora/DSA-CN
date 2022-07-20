//Write a program to find x to the power n (i.e. x^n). 
//Take x and n from the user. You need to return the answer.
//Do this recursively.

#include<iostream>
using namespace std;

int power(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	int out = x * power(x,n-1);
	return out;  
}
int main()
{
	int x,n;
	cin>>x;
	cin>>n;
	cout<<"Output = "<<power(x,n);
	
}
