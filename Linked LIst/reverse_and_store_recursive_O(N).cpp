//Given a singly linked list of integers, reverse it using recursion in O(N) 
//and return the head to the modified list.
//Note :
//No need to print the list, it has already been taken care. Only return the new head to the list.

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

void print(node* head)
{
	node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
node* reverse(node* head)
{
	if(head->next == NULL || head==NULL)
	{
		return head;
	}
	
	node* smallans = reverse(head->next);
	node* tail = head->next;
	
	tail->next= head;
	head->next=NULL;
	return smallans;
}
int main()
{
	node *head = takeinput();
	head = reverse(head);
	print(head);

	
	
}
