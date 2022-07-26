//
//Given a linked list, reverse it iteratively.
//You don't need to print the elements, just reverse the LL duplicates and return the head of updated LL.
//`Input format : Linked list elements (separated by space and terminated by -1)``


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
node* reverse(node* head)
{
	node* cur = head;
	node* prev = NULL;
	node* n = head->next;
	while(cur !=NULL)
	{
		cur->next = prev;
		prev= cur;
		cur = n;
		if(n!=NULL)
		{
			n=n->next;
		}
		
	}
	return prev;
}
int main()
{
	node *head = takeinput();
	head = reverse(head);
	print(head);

	
	
}
