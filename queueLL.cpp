#include <iostream>
#include "LL.cpp"
using namespace std;
class Queue
{
	public:
	node* head;
	node* end;
	Linkedlist obj;
	Queue()
	{
		head=obj.head;
		end=obj.tail;
	}
	void enqueue(int value){

		obj.insertat(value,1);
		head=obj.head;
		end=obj.tail;
	}
	void dequeue(){
		obj.dlt();
		head=obj.head;
		end=obj.tail;
	}
	bool isEmpty(){
		if(head==NULL)
		return true;
		else 
		return false;
	}
	int size(){
		return obj.countItems();
	}
	void display(){
		obj.display();
	}
};
int main(){
Queue q;
for(int i=0; i<5; i++)
q.enqueue(i);
q.display();
for(int i=0; i<3; i++)
q.dequeue();
q.display();
}
