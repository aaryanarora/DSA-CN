//You have been given a singly linked list of integers. 
//Write a function to print the list in a reverse order.
//To explain it further, you need to start printing the 
//data from the tail and move towards the head of the list, printing the head data at the end.
//Note :
//You can’t change any of the pointers in the linked list, just print it in the reverse order.

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

void reverse(node* head)
{
	if(head == NULL)
	{
		return;
	}
	reverse(head->next);
	cout<<head->data<<" ";
}

int main()
{
	node *head = takeinput();
	node *temp = head;
	reverse(temp);

	
	
}
