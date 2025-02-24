    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        while (temp1 != NULL || temp2 != NULL) {
            int sum = carry;
            if (temp1)
                sum += temp1->val;
            if (temp2)
                sum += temp2->val;
            ListNode* newNode = new ListNode(sum % 10);
            carry = sum / 10;

            curr->next = newNode;
            curr = curr->next;

            if (temp1)
                temp1 = temp1->next;
            if (temp2)
                temp2 = temp2->next;
        }
        if (carry) {
            ListNode* newNode = new ListNode(carry);
            curr->next = newNode;
        }

        return dummy->next;
    }
int main(){
    ListNode* l1 = NULL;
    ListNode* l2 = NULL;
    addTwoNumbers(l1 , l2);
    return 0;
}
