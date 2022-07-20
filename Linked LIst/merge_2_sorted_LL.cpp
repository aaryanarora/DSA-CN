//You have been given two sorted(in ascending order) singly linked lists of integers.
//Write a function to merge them in such a way that the resulting singly linked list 
//is also sorted(in ascending order) and return the new head to the list.
//Note :
//Try solving this in O(1) auxiliary space.
//
//No need to print the list, it has already been taken care.

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
node* mergelink(node* head1, node* head2)
{
	node* mhead = NULL;
	node* mtail = NULL;
	while(head1!=NULL && head2!=NULL)
	{
		
		if(head1->data < head2->data)
		{
			if(mhead == NULL)
			{
				mhead = head1;
				mtail = head1;	
			}
			else
			{
				mtail->next = head1;
				mtail = mtail->next;
			}
			head1=head1->next;
			
		}
		else if(head1->data >= head2->data)
		{
			if(mhead == NULL)
			{
				mhead = head2;
				mtail = head2;	
			}
			else
			{
				mtail->next = head2;
				mtail = mtail->next;
			}
			head2=head2->next;
		}
		if(head1== NULL)
		{
			mtail->next = head2;
			mtail = mtail->next;
			head2=head2->next;
		}
		if(head2 == NULL)
		{
			mtail->next = head1;
			mtail = mtail->next;
			head1=head1->next;
		}
		
		
	}
	return mhead;
}
int main()
{
	node *head1 = takeinput();
	node *head2 = takeinput();
	node *temp1 = head1;
	node *temp2 = head2;
	node* mhead = mergelink(temp1,temp2);
	print(mhead);
	
}
