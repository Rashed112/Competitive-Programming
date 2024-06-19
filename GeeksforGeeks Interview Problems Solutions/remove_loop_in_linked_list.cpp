class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *slow=head, *fast=head, *entry=head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                while(slow != entry){
                    slow = slow->next;
                    entry = entry->next;
                }
                
                while(slow->next != entry){
                    slow = slow->next;
                }
               
                slow->next = NULL;
                break;
            }
        }
    }
};
