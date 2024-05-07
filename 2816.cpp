class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        stack<int> st;
        while(head != NULL){
            st.push(head->val);
            head = head->next;
        }
        int k = st.top();
        int carry = 0;
        k = k*2 + carry;
        ListNode *temp = new ListNode(k%10);
        carry = k/10;
        st.pop();
        while(!st.empty()){
            int k = st.top();
            st.pop();
            k = k*2 + carry;
            ListNode *var = new ListNode(k%10);
            carry = k/10;
            var->next = temp;
            temp = var;
        }
        if(carry != 0){
            ListNode *var = new ListNode(carry);
            var->next = temp;
            temp =  var;
        }
        return temp;
    }
};