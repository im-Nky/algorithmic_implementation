#include <bits/stdc++.h>
using namespace std;

struct Node
{
        int data;
        struct Node* left, *right;
};

bool isBST(Node* root) { 
	static Node *prev = NULL; 
	// traverse the tree in inorder fashion and keep track of prev node 
	if (root!=NULL) { 
		if (isBST(root->left)==false) 
		return false; 

		// Allows only distinct valued nodes 
		if (prev != NULL && root->data <= prev->data) 
			return false; 

		prev = root; 
		return isBST(root->right); 
	} 
	return true;
} 

struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

/* Driver program to test above functions*/
int main()
{
	struct Node *root = newNode(3);
	root->left	 = newNode(2);
	root->right	 = newNode(5);
	root->left->left = newNode(1);
	root->left->right = newNode(4);

	if (isBST(root))
		cout << "Tree is BST"<<endl;
	else
		cout << "Tree is not a BST"<<endl;

	return 0;
}

