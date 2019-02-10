#include <iostream>
#include "LL.cpp"
using namespace std;
class Stack
{
	public:
	Node* top;
	Linkedlist obj;
	Stack(){
		top=obj.head;
	}
	void push(int value){
		obj.insertat(value,1);
		top=obj.head;
	}
	void pop(){
		obj.dltat(1);
		top=obj.head;
	}
	bool isEmpty(){
		if(top==NULL)
		return true;
		else 
		return false;
	}
	/*int size(){
	return obj.countItems();
	}*/
	void topDisplay(){
		cout<<top<<endl;
	}
	void display(){
		obj.display();
	}
};

int main(){
	Stack s;
for(int i=0;i<5;i++)
s.push(i);
s.display();
s.pop();
s.display();
s.pop();
s.display();
s.pop();
s.display();
//cout<<s.size()<<endl;
}


