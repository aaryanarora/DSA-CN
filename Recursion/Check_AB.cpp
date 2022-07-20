//Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
//a. The string begins with an 'a'
//b. Each 'a' is followed by nothing or an 'a' or "bb"
//c. Each "bb" is followed by nothing or an 'a'

#include<bits/stdc++.h>
using namespace std;
bool checkab(char s1[],int n)
{
	if(strlen(s1)==n && s1[0]=='b')
	{
		return false;
	}
	if(strlen(s1)==0)
	{
		return true;
	}
	if(s1[0]=='a')
	{
		if((s1[1]=='a')||(s1[1]=='b' && s1[2]=='b'))
		{
			return checkab(s1+1,n);
		}
		else
		return false;
	}
	else if(s1[0]=='b')
	{
		if(s1[1]=='b')
		{
			return checkab(s1+2,n);
		}
		else
		return false;
	}
	else
	return false;
}
int main()
{
	char s1[50];
	cin>>s1;
	int n = strlen(s1);
	cout<<checkab(s1,n);
}
