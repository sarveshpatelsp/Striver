    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* prev = new ListNode(0);
        prev->next = head;
        ListNode* fast = head;
        ListNode* slow = prev;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete(delNode);
        return head;
    }
int main(){
    Node* head = NULL;
    deleteMiddle(head);
    return 0;
}
