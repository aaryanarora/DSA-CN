//
//You have been given a singly linked list of integers where the elements 
//are sorted in ascending order. Write a function that removes the 
//consecutive duplicate values such that the given list only contains 
//unique elements and returns the head to the updated list.


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
void duplicate(node* head)
{
	node* temp = head;
	while(temp->next!=NULL)
	{
		
		node *a = temp->next;
		if(temp->data == a->data)
		{
			temp->next=a->next;
			delete a;
		}
		if(temp->next!=NULL && (temp->data != (temp->next)->data))
		{
			temp = temp->next;
		}
	}
}
int main()
{
	node *head = takeinput();
	duplicate(head);
	print(head);
	
	
}
