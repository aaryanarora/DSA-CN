//You have been given a linked list of integers. 
//Your task is to write a function that deletes a node from a given position, 'pos'.
//Note :
//Assume that the Indexing for the linked list always starts from 0.
//
//If the position is greater than or equal to the length of the linked list,
// you should return the same linked list without any change.

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
node* deleted(node* head,int num)
{
	int count =0;
	node* temp = head;
	if(num==0)
	{
		head=head->next;
		return head;
	}
	while(temp!=NULL && count<num-1)
	{
		temp=temp->next;
		count++;	
	}	
	if(temp!=NULL)
	{
		node* a = temp->next;
		temp->next = a->next;
		delete a;
	}
	return head;
}
int main()
{
	node *head = takeinput();
	int num;
	cin>>num;
	head = deleted(head,num);
	print(head);
	
	
	
}
