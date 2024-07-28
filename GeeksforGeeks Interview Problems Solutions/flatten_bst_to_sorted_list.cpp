class Solution
{
public:
    Node *flattenBST(Node *root)
    {
        Node *curr = root, *head = NULL;
        Node *tail = head;
        stack<Node*>st;
        while(curr || !st.empty()){
            while(curr){
                st.push(curr);
                curr = curr->left;
            }
            Node *temp = st.top();
            st.pop();
            if(!tail){
                tail = new Node(temp->data);
                head = tail;
            }
            else{
                tail->right = new Node(temp->data);
                tail = tail->right;
            }
            curr = temp->right;
        }
        return head;
    }
};
