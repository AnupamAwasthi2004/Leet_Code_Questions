class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode *temp1=head;
     int c=0;
     while(temp1->next!=nullptr){
        temp1=temp1->next;
        c=c+1;
    }
        int y=c-n+1;
        ListNode *temp2=head;
        ListNode *temp3=head;
        if(y==0 && head->next==nullptr) {
            head=nullptr;
            return head;
        }
        if(y==0 && head->next!=nullptr){
        head=head->next;
        return head;
        }
        while(y>0){
            temp3=temp2;
         temp2=temp2->next;
         y--;   
        }
        printf("%d",temp2->val);
        temp3->next=temp2->next;
        return head;
    }
};