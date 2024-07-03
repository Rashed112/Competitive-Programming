class Solution
{
    public:
    pair<bool, int> isSumTreeCheck(Node* root){
        if(root == NULL){
            return {true, 0};
        }
        if(root->left==NULL && root->right==NULL){
            return {true, root->data};
        }
        pair<bool, int> leftAns = isSumTreeCheck(root->left);
        pair<bool, int> rightAns = isSumTreeCheck(root->right);
        
        bool left = leftAns.first;
        bool right = rightAns.first;
        bool cond = root->data == leftAns.second+rightAns.second;
        if(left && right && cond){
            return {true, 2*root->data};
        }
        else{
            return {false, 0};
        }
        
    }
    
    bool isSumTree(Node* root)
    {
        return isSumTreeCheck(root).first;
    }
};
