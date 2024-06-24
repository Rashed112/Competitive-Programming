// solved from coding ninja

Node* sortList(Node *head){
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;
    Node *curr = head, *temp;
    while(curr){
        if(curr->data==0){
            temp = new Node(curr->data);
            zeroTail->next = temp;
            zeroTail = zeroTail->next;
        }
        else if(curr->data == 1){
            temp = new Node(curr->data);
            oneTail->next = temp;
            oneTail = oneTail->next;
        }
        else{
            temp = new Node(curr->data);
            twoTail->next = temp;
            twoTail = twoTail->next;
        }
        curr = curr->next;
    }
 
    zeroTail->next = oneHead->next;
    oneTail->next = twoHead->next;
    
    return zeroHead->next;

}
