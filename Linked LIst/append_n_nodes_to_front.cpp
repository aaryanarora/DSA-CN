//You have been given a singly linked list of integers along with an integer 'N'. 
//Write a function to append the last 'N' nodes towards the front of the singly 
//linked list and returns the new head to the list.

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
node *shift (node* head,int num)
{
	int count =0;
	node* temp = head;
	node* b = head;
	node* t = head;
	while(temp!=NULL)
	{
		temp = temp->next;
		count++;
	}

	int todo = count-num-1;
	delete temp;
	node* newtemp = head;
//	cout<<todo<<endl;
	int i=0;
	while(i!=todo)
	{
		newtemp = newtemp->next;
		b=b->next;
		i++;
	}
	
	for(int i=0;i<num;i++)
	{
		b=b->next;
	}
	b->next = t;
	head = newtemp->next;
	newtemp->next = NULL;
	return head;
}
int main()
{
	node *head = takeinput();
	int num;
	cin>>num;
	head = shift(head,num);
	print(head);
	
	
}
