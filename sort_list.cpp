    ListNode* findNode(ListNode* temp, int k) {
        int len = 1;
        while (temp != NULL) {
            if (len == k)
                return temp;
            len++;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || k == 0)
            return head;
        int len = 1;
        ListNode* temp = head;
        while (temp->next != NULL) {
            len++;
            temp = temp->next;
        }
        if (k % len == 0)
            return head;
        k = k % len;
        temp->next = head;
        ListNode* newNode = findNode(head, len - k);
        head = newNode->next;
        newNode->next = NULL;
        return head;
    }
