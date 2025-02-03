    Node *insertAtEnd(Node *head, int x) {
        Node* newNode = new Node(x);
        Node* temp = head;
        if(head == NULL)
        return newNode;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        return head;
    }
int main(){
    
    return 0;
}
