//You have been given two stacks that can store integers as the data. Out of the two given stacks, 
//one is populated and the other one is empty. 
//You are required to write a function that reverses the populated stack using the one which is empty.

#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack<int> s1;
	stack<int> s2;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		s1.push(num);
	}
	for(int i=0;i<n;i++)
	{
		int x= s1.top();
		s1.pop();
		s2.push(x);
	}
	for(int i=0;i<n;i++)
	{
		cout<<s2.top()<<" ";
		s2.pop();
	}
	
}
