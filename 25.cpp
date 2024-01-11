class Solution {
    ListNode *ori_h=nullptr;
     ListNode *ori_t=nullptr;
     ListNode *temp_t=nullptr;
     ListNode *temp_h=nullptr;
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
      if(head==nullptr || head->next==nullptr || k<=1) return head;
      int len=0;
      ListNode *ptr=head;  
      while(ptr!=nullptr){  //to find length of linked list
          len++;
          ptr=ptr->next;
      }
      ptr=head; 
      ListNode *fur=nullptr;
      while(k<=len){  // to traverse our whole linked list
      int temp_k=k;
      while(temp_k>0){  //to traverse our sub linked lish which we have to revese
        fur=ptr->next;
        ptr->next=nullptr;
        addnode(ptr);
        ptr=fur;
        temp_k--;  
      }
      len=len-k;
      if(ori_h==nullptr){ 
          ori_h=temp_h;
          ori_t=temp_t;
      }
      else{
          ori_t->next=temp_h;
          ori_t=temp_t;
      }
      temp_h=nullptr;
      temp_t=nullptr;
      }
      ori_t->next=ptr;
      return ori_h;
    }
    private:
     void addnode(ListNode *ptr){ //to add a new node at the starting 
         if(temp_h==nullptr){
             temp_h=ptr;
             temp_t=ptr;
         }
         else{
           ptr->next=temp_h;
           temp_h=ptr;
         }
     }
};