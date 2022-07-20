//You have been given a queue that can store integers as the data. You are required to 
//write a function that reverses the populated queue itself without using any other data structures.

#include<bits/stdc++.h>
#include<queue>
using namespace std;
void reverseQueue(queue<int>& q)
{
    if (q.empty())
        return;
  
    int data = q.front();
    q.pop();
    reverseQueue(q); 
    q.push(data);
}
int main()
{
	queue<int> q;
	int n;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		int num;
		cin>>num;
		q.push(num);
	}
	reverseQueue(q);
	for(int i =0;i<n;i++)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}
