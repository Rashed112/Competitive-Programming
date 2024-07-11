// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        Node* curr = root;
        while(curr){
            if(curr->key >= key){
                curr = curr->left;
            }
            else{
                pre = curr;
                curr = curr->right;
            }
        }
        curr = root;
        while(curr){
            if(curr->key <= key){
                curr = curr->right;
            }
            else{
                suc = curr;
                curr = curr->left;
            }
        }
    }
};

// Time: O(H)
// Space: O(1)
