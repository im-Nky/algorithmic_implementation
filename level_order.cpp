/*# Level Order and BFS is same. Only difference is that when we apply level Order in trees, Implementation Changes.
 
 # We don't maintain visited array to explore in level order in case of tree but in level order we use tree left & 
 right pointer to explore.

# Application: Top View,left view,right view & bottom view

# Extra Space required for Level Order Traversal is O(w) where w is maximum width of Binary Tree. In level order traversal, 
queue one by one stores nodes of different level.
# Extra Space required for Depth First Traversals is O(h) where h is maximum height of Binary Tree. In Depth First Traversals,
stack stores all ancestors of a node.
*/

void levelOrder(Node * root) {
        queue <Node *> q;
        q.push(root);
        while(q.empty()==0) {
            Node * temp = q.front();
            cout << temp->data<<" ";
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);       
        }
}
