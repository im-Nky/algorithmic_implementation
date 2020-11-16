#include<bits/stdc++.h> 
using namespace std; 

struct Node 
{ 
	int data; 
	struct Node *left, *right; 
}; 

void printrightview(Node * root){
	if(root==NULL) return;
	queue <Node *> q;
	q.push(root);
	while(q.empty()==0) {	// (!q.empty())
		//int n = q.size()();
		for(int i=1;i<=q.size();i++) {
			Node * temp = q.front();
			q.pop();
			if(i==1) {
				cout<<temp->data<<" ";
			}
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
		}
	}
}

Node* newNode(int data) 
{ 
	Node *temp = new Node; 
	temp->data = data; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

/* void printRightView(Node* root) 
{ 
	if (!root) 
		return; 

	queue<Node*> q; 
	q.push(root); 
	while (!q.empty()) 
	{	 
		int n = q.size(); 
		for(int i = 1; i <= n; i++) 
		{ 
			Node* temp = q.front(); 
			q.pop(); 
			if (i == 1)			// For Left View
				cout<<temp->data<<" ";
			//if (i == n) 			// For Right View 
			//	cout<<temp->data<<" ";
			if (temp->left != NULL) 
				q.push(temp->left); 
			if (temp->right != NULL) 
				q.push(temp->right); 
		} 
	} 
}*/

int main() 
{ 
	Node* root = newNode(10); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(7); 
	root->left->right = newNode(8); 
	root->right->right = newNode(15); 
	root->right->left = newNode(12); 
	root->right->right->left = newNode(14); 

	printrightview(root); 
} 

