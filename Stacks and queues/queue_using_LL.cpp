//Implement a Queue Data Structure specifically to store integer data using a Singly Linked List.
//The data members should be private.
//You need to implement the following public functions :
//1. Constructor:
//It initialises the data members as required.
//2. enqueue(data) :
//This function should take one argument of type integer. It enqueues the element into the queue and 
//returns nothing.
//3. dequeue() :
//It dequeues/removes the element from the front of the queue and in turn, returns the element being
// dequeued or removed. In case the queue is empty, it returns -1.
//4. front() :
//It returns the element being kept at the front of the queue. In case the queue is empty, it returns -1.
//5. getSize() :
//It returns the size of the queue at any given instance of time.
//6. isEmpty() :
//It returns a boolean value indicating whether the queue is empty or not.
//Operations Performed on the Stack:
//Query-1(Denoted by an integer 1): Enqueues an integer data to the queue.
//
//Query-2(Denoted by an integer 2): Dequeues the data kept at the front of the queue and returns it to the caller.
//
//Query-3(Denoted by an integer 3): Fetches and returns the data being kept at the front of the queue but doesn't 
//remove it, unlike the dequeue function.
//
//Query-4(Denoted by an integer 4): Returns the current size of the queue.
//
//Query-5(Denoted by an integer 5): Returns a boolean value denoting whether the queue is empty or not.


#include<iostream>
using namespace std;
template <typename T>
class node
{
	public:
		T data;
		node<T> *next;
		
		node(T n)
		{
			data = n;
			next = NULL;
		}
		
		
};
template <typename T>
class Queue
{
		node<T> *head;
		node<T> *tail;
		int size;
		
		public:
			queue()
			{
				head = NULL;
				tail = NULL;
				size =0;
			}
			int getsize()
			{
				return size;
			}
			bool isempty()
			{
				if(size == 0)
				{
					return true;
				}
				else
				return false;
			}
			void enqueue(T element)
			{
				node<T> *newnode = new node<T>(element);//IMP
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
				size++;
			}
			T front()
			{
				return head->data;
			}
			T dequeue()
			{
				node<T> *temp = head;
				head = head->next;
				size--;
				return temp->data;
			}
};
int main()
{
	Queue<int> q;
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	cout<<q.getsize()<<endl;
	cout<<q.front()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.front()<<endl;
	cout<<q.getsize()<<endl;
}
