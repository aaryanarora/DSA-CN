//Given a linked list, an integer n and a position i, 
//Insert that node n into Linked List at ith position recursively.
//If position i is greater than length of LL, then you should return 
//the same LL without any change. And if position i is equal to length 
//of input LL, insert the node at last position.
//Indexing starts from 0. You don't need to print the elements, 
//just insert and return the head of updated LL.
//Input format :
//Line 1 : Linked list elements (separated by space and terminated by -1)
//Line 2 : Integer i (position)
//Line 3 : Integer n (Node to be inserted)

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
node *insert(node* head,int pos,int num)
{
	if(head==NULL)
       return NULL;
	if(pos == 0)
	{
		node* newnode = new node(num);
		newnode->next = head;
		head = newnode;
		return head;
	}
	if(pos == 1)
	{
		node* newnode = new node(num);
		newnode->next = head->next;
		head->next = newnode;
		return head;
	}
	node *curr = insert(head->next,pos-1,num);
	return head;
}
int main()
{
	node *head = takeinput();
	int pos,num;
	cin>>pos;
	cin>>num;
	head = insert(head,pos,num);
	print(head);	

	
	
	
}
