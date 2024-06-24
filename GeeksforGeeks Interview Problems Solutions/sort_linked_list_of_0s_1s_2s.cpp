// solved from coding ninja

Node* sortList(Node *head){
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;
    Node *curr = head;
    while(curr){
        if(curr->data==0){
            zeroTail->next = curr;
            zeroTail = zeroTail->next;
        }
        else if(curr->data == 1){
            oneTail->next = curr;
            oneTail = oneTail->next;
        }
        else{
            twoTail->next = curr;
            twoTail = twoTail->next;
        }
        curr = curr->next;
    }
 
    zeroTail->next = oneHead->next;
    oneTail->next = twoHead->next;
    // if we don't make the merged list's tail null, we'll get TLE
    twoTail->next = NULL;
    
    return zeroHead->next;

}
