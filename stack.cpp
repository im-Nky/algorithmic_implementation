#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
class stack
{
	struct node *top;
	public:
	stack()
	{
		top=NULL;
	}
	void push();
	void pop();
	void topelement();
	void stack_display();
	void exit();
};

void stack::push()
{
	int value;
	struct node *ptr;
	ptr=new node;
	cout<<"Enter data entry for stack";
	cin>>value;
		
	//ptr=top;
		ptr->data=value;
		ptr->next=top;
		top=ptr;
	cout<<"The new element is inserted into stack";
}

void stack::pop()
{
	int u;
	struct node *temp;
	//temp=top;
	if(top==NULL)
	{
		cout<<"stack is empty";		
	}
	temp=top;		
	//u=top->data;
	top=top->next;
	cout<<"\npoped element"<<temp->data;
	delete temp;
	//top=temp;
}

void stack::topelement()
{
	cout<<"top element of stack is"<<top->data;
}

void stack::stack_display()
{
	struct node *ptr1;
	ptr1=top;
	cout<<"elements in stack are";	
	while(ptr1!=NULL)
	{
		cout<<"->"<<ptr1->data;		
		ptr1=ptr1->next;		
	}
}

main()
{
	int ch;
	stack s;
	while(1)
	{
		cout<<"\nEnter choice for operation which you want to perform on stack";
		cout<<"\n1.push\n"<<"2.pop\n"<<"3.topelement\n"<<"4.stack_display\n"<<"5.exit\n";
		cin>>ch;
	
		switch(ch)
		{
			case 1:
			s.push();
			break;
			case 2:
			s.pop();
			break;
			case 3:
			s.topelement();
			break;
			case 4:
			s.stack_display();
			break;
			case 5:
			return 0;		
			break;
			default:
		 	cout<<"Wrong choice";
			break;
		}
	}	
}
