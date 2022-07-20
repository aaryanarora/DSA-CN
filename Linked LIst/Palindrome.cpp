//
//You have been given a head to a singly linked list of integers. 
//Write a function check to whether the list given is a 'Palindrome' or not.

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
node *reverse(node*head2)
{
    node *p=head2,*q=NULL,*r=NULL;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head2=q;
    return q;
}
bool palindrome(node* head)
{
	node* temp = head;
	int count =0;
	while(temp!=NULL)
	{
		count++;
		temp = temp->next;
	}
	int mid = count/2;
	node *t =head;
	for(int i=0;i<mid;i++)
	{
		t=t->next;
	}
	node* head2 = t->next;
	t->next = NULL;
	head2 = reverse(head2);
	
	while(head&&head2)
    {
        if(head->data!=head2->data)
            return false;
        head=head->next;
        head2=head2->next;
    }
     return true;
}
	

int main()
{
	node *head = takeinput();
	node *temp = head;
	cout<<palindrome(temp);

	
	
}
