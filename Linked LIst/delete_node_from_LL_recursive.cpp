//Given a singly linked list of integers and position 'i', delete the node present at the 
//'i-th' position in the linked list recursively.
//Note :
//Assume that the Indexing for the linked list always starts from 0.
//
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
node *deletenode(node* head,int pos)
{
	if(head==NULL)
       return NULL;
	if(pos == 0)
	{
		head = head->next;
		return head;
	}
	if(pos == 1)
	{
		node* temp = head->next; 
		head->next = temp->next;
		delete temp;
		return head;
	}
	node *curr = deletenode(head->next,pos-1);
	return head;
}
int main()
{
	node *head = takeinput();
	int pos;
	cin>>pos;
	head = deletenode(head,pos);
	print(head);	

	
	
	
}
