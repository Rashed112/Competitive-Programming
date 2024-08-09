class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void helper(Node* root, stack<Node*>&s){
        Node* curr = root;
        while(curr){
            s.push(curr);
            curr = curr->left;
        }
    }
    
    vector<int> merge(Node *root1, Node *root2) {
        Node* h1 = NULL, *h2 = NULL;
        stack<Node*>s1, s2;
        
        helper(root1, s1);
        helper(root2, s2);
        vector<int>res;
        while(!s1.empty() && !s2.empty()){
            Node* curr1 = s1.top();
            Node* curr2 = s2.top();
            
            if(curr1->data < curr2->data){
                res.push_back(curr1->data);
                s1.pop();
                helper(curr1->right, s1);
            }
            else if(curr2->data <curr1->data){
                res.push_back(curr2->data);
                s2.pop();
                helper(curr2->right, s2);
            }
            else{
                res.push_back(curr1->data);
                res.push_back(curr2->data);
                s1.pop();
                s2.pop();
                helper(curr1->right, s1);
                helper(curr2->right, s2);
            }
        }
        while(!s1.empty()){
            Node* curr = s1.top();
            s1.pop();
            res.push_back(curr->data);
            helper(curr->right, s1);
        }
        while(!s2.empty()){
            Node* curr = s2.top();
            s2.pop();
            res.push_back(curr->data);
            helper(curr->right, s2);
        }
        return res;
    }
};
