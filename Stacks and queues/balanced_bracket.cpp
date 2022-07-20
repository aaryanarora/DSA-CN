
//For a given a string expression containing only round brackets or parentheses, 
//check if they are balanced or not. Brackets are said to be balanced if the bracket 
//which opens last, closes first.
//Example:
//Expression: (()())
//Since all the opening brackets have their corresponding closing brackets, we say 
//it is balanced and hence the output will be, 'true'.
//
//You need to return a boolean value indicating whether the expression is balanced or not.
//Note:
//The input expression will not contain spaces in between.

#include<bits/stdc++.h>
#include<stack>
using namespace std;
bool isbalanced(char a[])
{
	stack<char> s1;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='(' || a[i]=='{' || a[i]=='[')
		{
			s1.push(a[i]);
		}
		if(a[i]==')' || a[i]=='}' || a[i]==']')
		{
			if(s1.empty())
			{
				return false;
			}
			if(s1.top() == '(' && a[i]==')')
			{
				s1.pop();
			}
			else if(s1.top() == '{' && a[i]=='}')
			{
				s1.pop();
			}
			else if(s1.top() == '[' && a[i]==']')
			{
				s1.pop();
			}
			else
			return false;
		}
	}
	if(s1.empty())
	{
		return true;
	}
	else
	return false;
}
int main()
{
	char a[20];
	cin>>a;
	cout<<isbalanced(a);
	
}
