class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_map<int, int>m;
        
        Node *curr = head, *prev = NULL;
        while(curr){
            
            if(m[curr->data]){
                prev->next = curr->next;
                delete(curr); // optional
            }
            else{
                m[curr->data]++;
                prev = curr;
            }
             curr = prev->next;
        }
        return head;
    }
};
