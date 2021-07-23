class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        int c=0; //carry
        
        while(l1||l2||c){
            int i = l1?l1->val:0;
            int j = l2?l2->val:0;
            
            temp->next = new ListNode((i+j+c)%10);
            temp = temp->next;
            c = (i+j+c)/10;
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        
        return res->next;
    }
};
