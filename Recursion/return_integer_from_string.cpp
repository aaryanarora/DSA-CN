//Write a recursive function to convert a given string into the number it represents.
// That is input will be a numeric string that contains only numbers, 
//you need to convert the string into corresponding integer and return the answer.

#include<iostream>
#include<string.h>
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
int stoi(char a[],int n)
{
	if(a[0]=='\0')
	{
		return 0;
	}
	
	if(a[0]=='1')
	{
		return 1*power(10,n-1) + stoi(a+1,n-1);
	}
	else if(a[0]=='2')
	{
		return 2*power(10,n-1) + stoi(a+1,n-1);
	}
	else if(a[0]=='3')
	{
		return 3*power(10,n-1) + stoi(a+1,n-1);
	}
	else if(a[0]=='4')
	{
		return 4*power(10,n-1) + stoi(a+1,n-1);
	}
	else if(a[0]=='5')
	{
		return 5*power(10,n-1) + stoi(a+1,n-1);
	}
	else if(a[0]=='6')
	{
		return 6*power(10,n-1) + stoi(a+1,n-1);
	}
	else if(a[0]=='7')
	{
		return 7*power(10,n-1) + stoi(a+1,n-1);
	}
	else if(a[0]=='8')
	{
		return 8*power(10,n-1) + stoi(a+1,n-1);
	}
	else if(a[0]=='9')
	{
		return 9*power(10,n-1) + stoi(a+1,n-1);
	}
}
int main()
{
	char a[50];
	cin>>a;
	int n=strlen(a);
	cout<<stoi(a,n);
}
