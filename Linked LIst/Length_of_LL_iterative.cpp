//For a given singly linked list of integers, find and return its length. 
//Do it using an iterative method.

#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
		
		node(int n)
		{
			data = n;
			next = NULL;
		}
		
		
};
node* takeinput()
		{
			int data;
			cin>>data;
			node *head = NULL;
			node *tail = NULL;
			while(data!=-1)
			{
				node *newnode = new node(data);
				if(head == NULL)
				{
					head = newnode;
					tail = newnode;
				}
				else
				{
					tail->next = newnode;
					tail = tail->next;
				}
				cin>>data;
				
			}
			return head;
		}

int count(node *head)
{
	node* temp = head;
	int c=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		c++;
	}
	return c;
}
int main()
{
	node *head = takeinput();
	cout<<count(head);
	
	
}
