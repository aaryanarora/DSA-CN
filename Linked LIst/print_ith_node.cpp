//For a given a singly linked list of integers and a position 'i', print the node data at the 'i-th' position.
//Note :
//Assume that the Indexing for the singly linked list always starts from 0.
//
//If the given position 'i',  is greater than the length of the given singly linked list, 
//then don't print anything.

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

int ith(node *head,int num)
{
	node* temp = head;
	int c=0;
	while(c<num %% temp!=NULL)
	{
		temp=temp->next;
		c++;
		
	}
	return temp->data;
}
int main()
{
	node *head = takeinput();
	int num;
	cin>>num;
	cout<<ith(head,num);
	
	
}
