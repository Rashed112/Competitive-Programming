class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        Node * successor = NULL;
        while(root){
            if(x->data >= root->data){
                root = root->right;
            }
            else{
                successor = root;
                root = root->left;
            }
        }
        return successor;
    }
};

// Time : O(H)
// Space: O(1)
