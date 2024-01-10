class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr) return head;
        if(head->next==nullptr) return head;
     ListNode* temp=head;
     ListNode* dummy = new ListNode(1000);
     ListNode* q = dummy;
     q->next=head;
     dummy->next=head;
     while(temp!=nullptr){
         if(temp->next==nullptr) break;
         ListNode *to=q->next->next;
         q->next->next=q->next->next->next;
         to->next=q->next;
         q->next=to;
         temp=temp->next;
         q=q->next->next;
     }
     return dummy->next;  
    }
};