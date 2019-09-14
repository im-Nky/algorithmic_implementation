#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

class queue
{
	private:	
	struct node *front;
	struct node *rear;
	public:
	queue()
	{
		front=NULL;
		rear=NULL;
	}
	void enqueue();
	void dequeue();
	void display();	
};

void queue::enqueue()		// Enqueue
{
	struct node *ptr;	
	ptr = new node;
	int a;
	cout<<"Enter value to enqueue";
	cin>>a;
	ptr->data=a;
	ptr->next=NULL;
	if(front==NULL)
	{
		front=ptr;
	}
	else
	{
		rear->next=ptr;		
	}
	rear=ptr;
} 

void queue::dequeue()		// dequeue
{
	struct node *front1;	
	if(front==NULL)
	{
		cout<<"Queue is Empty";	
	}
	else
	{
		cout<<"dequeued data is"<<front->data;			
		front=front->next;		
	}	
} 

void queue::display()
{
	struct node *tr;
	tr=front;
	cout<<"elements in the queue ";
	while(tr!=NULL)
	{
		cout<<"->"<<tr->data;		
		tr=tr->next;				
	}
}

int main()
{
	queue q;	
	int ch;	
	while(1)
	{
		cout<<"\nenter your choice\n";
		cout<<"1.Enqueue\n";
		cout<<"2.Dequeue\n";
		cout<<"3.Display\n";
		cout<<"4.exit\n";
		cin>>ch;	
		switch(ch)
		{
			case 1:
			 q.enqueue();	
			 break;				
			case 2:
			 q.dequeue();	
			 break;				
			case 3:			 
			 q.display();
			 break;			
			case 4:
			 return 0;
			 break;	
			default:
			  cout<<"fuck yourself";	
			 break;	
		}
	}
//return 0;	
}
