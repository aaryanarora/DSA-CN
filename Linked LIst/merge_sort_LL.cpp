//Given a singly linked list of integers, sort it using 'Merge Sort.'
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
node* midpoint(node* head)
{
	node* slow =head;
	node* fast =head;
	
	while(fast->next && fast->next->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		
	}
	return slow;
}
node* mergelink(node* head1, node* head2)
{
	node* newHead = NULL;
    node *tail=NULL;
   

    // Pick either head1 or head2 to make new head
    if (head1->data <= head2->data) {
        newHead = head1;
        head1=head1->next;
    }
    else {
        newHead = head2;
        head2=head2->next;
    }
    tail=newHead;
   
    while(head1!=NULL && head2!=NULL)
    {
        if (head1->data <= head2->data) {
        tail->next = head1;
        head1=head1->next;
    }
    else {
        tail->next = head2;
        head2=head2->next;
    }
   
    tail=tail->next;

    }

    if(head1!=NULL)
    {
        tail->next=head1;
    }
    if(head2!=NULL)
    {
        tail->next=head2;
    }

    return newHead;
//	node* mhead = NULL;
//	node* mtail = NULL;
//	while(head1!=NULL && head2!=NULL)
//	{
//		
//		if(head1->data < head2->data)
//		{
//			if(mhead == NULL)
//			{
//				mhead = head1;
//				mtail = head1;	
//			}
//			else
//			{
//				mtail->next = head1;
//				mtail = mtail->next;
//			}
//			head1=head1->next;
//			
//		}
//		else if(head1->data >= head2->data)
//		{
//			if(mhead == NULL)
//			{
//				mhead = head2;
//				mtail = head2;	
//			}
//			else
//			{
//				mtail->next = head2;
//				mtail = mtail->next;
//			}
//			head2=head2->next;
//		}
//		if(head1== NULL)
//		{
//			mtail->next = head2;
//			mtail = mtail->next;
//			head2=head2->next;
//		}
//		if(head2 == NULL)
//		{
//			mtail->next = head1;
//			mtail = mtail->next;
//			head1=head1->next;
//		}
//		
//		
//	}
//	return mhead;
}

node* mergesort(node* head)
{
	if((head == NULL) || (head->next == NULL))
	{
		return head;
	}
	node* temp1 = head;
	node* temp2 = NULL;
	node* mid = midpoint(head);
	temp2 = mid->next;
	mid->next = NULL;
	node *newhead = mergelink(mergesort(head),mergesort(temp2));

	return newhead;
	
}
int main()
{
	node *head = takeinput();
	node *temp1 = head;
	node* mhead = mergesort(temp1);
	print(mhead);
	
}
