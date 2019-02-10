#include <iostream>
using namespace std;
class QueueArr
{	public:
	int head;
	int end;
	int arr[100];
	QueueArr()
	{
		head=-9;
		end=-9;
	}
	void enqueue(int value)
	{
		if(head==-9)
		{
			head=0;
			end=0;
		}
		else
			end++;
		arr[end]=value;
	}
	void dequeue()
	{

		if(head==-9)
			cout<<"The queue doesn't have so many elements"<<endl;
		else 
		{
			int i;
			for(i=0;i<end;i++)
				arr[i]=arr[i+1];
			end--; 
		}

	}

	void display()
	{
		int i;
		for(i=0;i<end;i++)
		cout<<arr[i]<<"->";
		cout<<arr[i]<<endl;
	}
};

int main()
{
QueueArr obj;
for(int i=0;i<5;i++)
obj.enqueue(i);
obj.dequeue();
obj.dequeue();
obj.dequeue();
obj.display();

}
