    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
/*
    ListNode* middleNode(ListNode* head) {
        if (head->next == NULL)
            return head;
        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        int midNode = (cnt / 2) + 1;
        temp = head;
        while (temp != NULL) {
            midNode--;
            if (midNode == 0)
                break;
            temp = temp->next;
        }
        return temp;
    }
*/
int main(){
    ListNode* head = NULL;
    middleNode(head); 
    return 0;
}
