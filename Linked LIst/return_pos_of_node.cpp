//You have been given a singly linked list of integers. 
//Write a function that returns the index/position of an integer data 
//denoted by 'N' (if it exists). Return -1 otherwise.
//Note :
//Assume that the Indexing for the singly linked list always starts from 0

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

int pos(node* head,int num)
{
	int index = 0;
	node* temp = head;
	while(temp!=NULL)
	{
		if(temp->data == num)
		{
			return index;
		}
		temp=temp->next;
		index++;
	}
	return -1;	
}
int main()
{
	node *head = takeinput();
	int num;
	cin>>num;
	cout<<pos(head,num);
	
	
	
}
