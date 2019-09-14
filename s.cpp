#include<iostream>
#define MAX 5
using namespace std;

int s[MAX],top=-1;	

void push()
{
	int a;
	if(top==MAX-1)
	{
		cout<<"Stack is full";		
	}
	else
	{
		cout<<"\nEnter element to inseert in stack";
		cin>>a;	
		++top;
		s[top]=a;			
		cout<<"\nelement inserted in stack";	
	}
}
void pop()
{
	int x;
	if(top==-1)
	{
		cout<<"\nstack is empty";
	}
	else
	{
		x=s[top];
		top--;
		cout<<"\npoped element from stack"<<x;
	}
	//return x;
}
		
void display()
{
	int i;
	
	for(i=0;i<=top;i++)
	{
		cout<<"\nelement in stack are";
		cout<<s[i];
	}
}
	
void stackcount()
{
	int j,c=0;
	cout<<"\nelement in stack are";
	for(j=0;j<top;j++)
	{
		cout<<s[j];
		c++;
	}
	cout<<"\ntotal elements in stack"<<c;
}

void topelement()
{
	cout<<"\ntop of the stack"<<s[top];
}

int main()
{
	int ch;
	while(1)
	{
		cout<<"\nenter your choice";
		cin>>ch;
		switch(ch)
		{		
			case 1:
	  	 	 push();
			break;	
			case 2:
	  	 	 pop();
			break;		
			case 3:
	  	 	 display();
			break;		
			case 4:
	  	 	 stackcount();	
			break;	
			case 5:
	  	 	 topelement();	
			break;
			case 6:
	  		 return 0;	//Exit
			break;
			default:
	  		 cout<<"\nWrong choice";	
			break;	
		}
	}
}
