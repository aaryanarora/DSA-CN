//Given a linked list, find and return the length of input LL recursively.
//Input format :
//Linked list elements (separated by space and terminated by -1)

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

int count(node *head)
{
	if(head==NULL)
	{
		return 0;
	}
	return 1+ count(head->next);
}
int main()
{
	node *head = takeinput();
	node *temp = head;
	cout<<count(temp);
	
	
}
