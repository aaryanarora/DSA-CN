//For a given singly linked list of integers, find and return the node present at the middle of the list.
//Note :
//If the length of the singly linked list is even, then return the first middle node.
//
//Example: Consider, 10 -> 20 -> 30 -> 40 is the given list, then the nodes present at the 
//middle with respective data values are, 20 and 30. We return the first node with data 20.

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

int midpoint(node* head)
{
	node* slow =head;
	node* fast =head;
	while(fast->next && fast->next->next)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow->data;
}
int main()
{
	node *head = takeinput();
	cout<<midpoint(head);

	
	
}
