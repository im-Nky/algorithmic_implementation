#include<iostream>
using namespace std;

struct node
{
	int data;	
	struct node *right;	
	struct node *left;
	
}*root;

class BST
{
	struct node *ptr;
	public:	
	BST()
	{
		root=NULL;	
	}	
	void insert(struct node *,struct node *);
	void inorder(struct node *);
	void display(struct node *, int);
	void preorder(struct node *);
	void postorder(struct node *);
	//void del(struct node *,int );
};

int main()
{
	int ch,dl;
	BST b;
	while(1)
	{
		cout<<"\nEnter your choice";
		cout<<"\n1. Insert";		
		cout<<"\n2. Display";		
		cout<<"\n3. Delete";				
		cout<<"\n4. Inorder";				
		cout<<"\n5. preorder";				
		cout<<"\n6. postorder";				
		cout<<"\n7. Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
			 struct node *temp;
			 temp=new node;
			 cout<<"Enter the value to insert";
			 cin>>temp->data;
			 b.insert(root,temp);
			 break;
			
			case 2:
			 b.display(root,1);
			 break;

			case 3:
			 cout<<"Enter Value to delete";
			 cin>>dl;
			 //b.del(root,dl);	
			 break;
			
			case 4:
			 cout<<"The inorder traversal of tree ";
			 b.inorder(root);
			 break;

			case 5:
			 cout<<"The preorder traversal of tree ";
			 b.preorder(root);
			 break;

			case 6:
			 cout<<"The postorder traversal of tree ";
			 b.postorder(root);
			 break;						

			case 7:
			 return 0;
			 break;			
			
			default:
			 cout<<"Wrong choice";
			 break;
		}
	}
	return 0;	
}

void BST::insert(struct node *tree,struct node *newnode)	
{
	//struct node *newnode;
	//newnode=new node;	
	//cout<<"\nEnter value you want to insert in tree -> ";	
	//cin>>newnode->data;
	if(root==NULL)
	{		
		root= new node;
		root->data=newnode->data;		
		root->left=NULL;
		root->right=NULL;
		cout<<"\nroot is added";
		return;
	}
	if(tree->data == newnode->data)
	{
		cout<<"\nElement is already in the tree";
		return;		
	}
	if(tree->data > newnode->data)
	{
		if(tree->left!=NULL)
		{							
			insert(tree->left, newnode);			
		}
		else
		{
			//cout<<"\nElement will be inserted to left subtree";
			tree->left=newnode;
			(tree->left)->left=NULL;
			(tree->left)->right=NULL;
			cout<<"\nnode added to left";
			return;						
		}
	}
	if(tree->data < newnode->data)
	{
		if(tree->right!=NULL)
		{							
			insert(tree->right, newnode);			
		}
		else
		{
			//cout<<"\nElement will be inserted to right subtree";
			tree->right=newnode;
			(tree->right)->left=NULL;
			(tree->right)->right=NULL;
			cout<<"\nnode added to right";						
			return;
		}						
	}						
}

void BST::display(struct node *ptr, int level)
{
    int i;
    if (ptr != NULL)
    {
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level;i++)
              cout<<"       ";
	}
        cout<<ptr->data;
        display(ptr->left, level+1);
    }
}

void BST::inorder(struct node *tree1)
{
	if(tree1!=NULL)				// use if statement with recursive problems avoid loop
	{
		inorder(tree1->left);
		cout<<"<->"<<tree1->data;
		inorder(tree1->right);
	}
}

void BST::preorder(struct node *tree1)
{
	if(tree1!=NULL)				// use if statement with recursive problems avoid loop
	{
		preorder(tree1->left);		
		preorder(tree1->right);
		cout<<"<->"<<tree1->data;
	}
}

void BST::postorder(struct node *tree1)
{
	if(tree1!=NULL)				// use if statement with recursive problems avoid loop
	{
		cout<<"<->"<<tree1->data;
		postorder(tree1->left);		
		postrder(tree1->right);
	}
}

