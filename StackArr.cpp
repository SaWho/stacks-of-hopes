#include <iostream>

using namespace std;
class StackArr
{
public:
int top;
int bottom;
int arr[100];
StackArr()
{
top=-9999;
bottom=-9999;

}
void pop()
{
	if(top==-9999)
		cout<<"The stack doesn't have so many elements"<<endl;
	else 
	{
		int i;
		for(i=0;i<bottom;i++)
			arr[i]=arr[i+1];
		bottom--; 
	}
}
bool isEmpty()
{
if(top==-9999)
return true;
else false;
}
void push(int value)
{
	if(top==-9999)
	{
		top=0;
		bottom=0;
		arr[0]=value;
	}
	else
	{
		if(bottom==99)
			cout<<"MAximum limit of stack reached"<<endl;
		else
		{	int i;
			for(i=bottom;i>=0;i--)
			arr[i+1]=arr[i];
			arr[i+1]=value;
			bottom++;
		}
	}
}

void display()
{
int i;
for(i=0;i<bottom;i++)
cout<<arr[i]<<"->";
cout<<arr[i]<<endl;
}
};
int main()
{
StackArr obj;
for(int i=0;i<5;i++)
obj.push(i);
obj.pop();
obj.pop();
obj.pop();
cout<<"Is it empty?"<<obj.isEmpty()<<endl;
obj.display();
}
