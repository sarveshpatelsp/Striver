    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node* head = *head_ref;
        Node* temp = head;
        if(head == NULL) return; 
        while(head->data == x)
        {
            head = head->next;
            head -> prev = NULL;
            free(temp);
            temp = head;
        }
        *head_ref = head;
        while(temp != NULL){
        if(temp->data == x)
        {
            Node* nextNode = temp->next;
            Node* prevNode = temp->prev;
            prevNode->next = nextNode;
            if(nextNode != NULL) nextNode->prev = prevNode;
            
            free(temp);
            temp = nextNode;
        }
        else temp = temp->next;
     }
    }
