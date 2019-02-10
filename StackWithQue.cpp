#include <iostream>
using namespace std;
class node
{	public:
	int data;
	node* next;
	node()
	{
		next=NULL;
	}
};
class Queue
{	public:
	node* head;
	node* bottom;
	Queue()
	{
		head=NULL;
		bottom=NULL;
	}
	void enqueue(int value)
	{
		node *temp=new node();
		temp->data=value;
		if(head==NULL)
		{
			head=temp;
		}
		else 
			bottom->next=temp;
		bottom=temp;
	}
	void dequeue()
	{
		node* temp;
		if(head==NULL)
			cout<<"I hate you"<<endl;
		else
		{	
			temp=head;
			head=head->next;
			delete temp;
		}
	}
	void display()
	{
		node* current;
		current=head;
		while(current!=NULL)
		{
			cout<<current->data<<"->";
			current=current->next;
		}
	}

};
class Stack
{	public:
	Queue ob1,ob2;
	void push(int value)
	{
		while(ob1.head!=NULL)
		{
			ob2.enqueue(ob1.head->data);
			ob1.dequeue();
		}
		ob1.enqueue(value);
		while(ob2.head!=NULL)
		{
			ob1.enqueue(ob2.head->data);
			ob2.dequeue();
		}
	}

	void pop()
	{
		ob1.dequeue();
	}
	void display()
	{
		ob1.display();
	}
};
int main()
{
Stack obj;
for(int i=1;i<=5;i++)
{
obj.push(i);
}
obj.pop();
obj.pop();
obj.pop();
obj.pop();
obj.display();
}
