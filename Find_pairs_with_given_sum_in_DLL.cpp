    Node* findTail(Node* head)
    {
        Node* temp = head;
        while(temp->next!=NULL)
        temp = temp->next;
        return temp;
    }
    
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
       vector<pair<int, int>> ans;
       if(head == NULL) return ans;
       Node* left = head;
       Node* right = findTail(head); 
       while(left->data < right->data)
       {
           if(left->data + right->data == target)
           {
               ans.push_back({left->data , right->data});
               left = left->next;
               right = right->prev;
           }
           else if(left->data + right->data < target)
           left = left->next;
           else right = right->prev;
       }
       return ans;
    }
int main(){
    Node* head = NULL;
    int target;
    cin >> target;
    findPairsWithGivenSum(head , target);
    return 0;
}
