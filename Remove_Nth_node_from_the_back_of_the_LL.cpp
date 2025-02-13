    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        for (int i = 0; i < n; i++)
            fast = fast->next;
        if (fast == NULL)
            return head->next;
        while (fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete (delNode);
        return head;
    }
int main(){
    return 0;
}
