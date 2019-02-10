#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	node()
	{
		next=NULL;
	}
};
class Stack
{
	public:
	node* top;
	node* bottom;
	Stack()
	{
		top=NULL;
		bottom=NULL;
	}
	void push(int value)
	{
	
	node* temp=new node();	
	temp->data=value;
	if(top==NULL)
	{
		top=temp;
		bottom=temp;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
	}
	void pop()
	{		
	node* temp;
	if(top==NULL)
		cout<<"No can do"<<endl;
	else
	{
		temp=top;
		top=temp->next;
		delete temp;
		if(top==NULL)
			bottom=NULL;
	}
	}
	bool isEmpty()
	{
	if(top==NULL)
		return true;
	else 
		return false;
	}

	void display()
	{node * current;
	current=top;
	while(current->next!=NULL)
	{	cout<<current->data<<"->";
		current=current->next;
	}
	cout<<current->data<<endl;	
	}
};


class QueWithStack
{
public:
node* head;
node* end;
Stack obj1;
Stack obj2;
QueWithStack()
{
head=NULL;
end=NULL;
}
void enqueue(int value)
{
	obj1.push(value);
	if(head==NULL)
		head=obj1.top;
	else
		end->next=obj1.top;
	end=obj1.top;
}
void dequeue()
{
	node* current;
	current=end;
	while(current!=obj1.bottom)
	{
		obj2.push(current->data);
		current=current->next;
		obj1.pop();
	}
	obj1.pop();
	current=obj2.top;
	while(current!=NULL)
	{
		obj1.push(current->data);
		current=current->next;
		obj2.pop();
	}
	head=obj1.bottom;
}
void display()
{
	node* current;
	current=end;
	while(current!=NULL)
	{
	obj2.push(current->data);
	current=current->next;
	obj1.pop();
	}
	obj2.display();
}
};
int main()
{
QueWithStack q;
for(int i=1;i<=5;i++)
q.enqueue(i);
q.dequeue();
q.dequeue();
q.dequeue();
q.display();
}
