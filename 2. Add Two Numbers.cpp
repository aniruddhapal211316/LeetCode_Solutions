
// Time Complexity- O(N)
// Auxiliary Space- O(1)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = nullptr, *current = nullptr;
        int carry = 0;
        while(l1 and l2){
            int val = carry+l1->val+l2->val; 
            carry = (val/10)%10;
            if(carry) val%=10; 
            ListNode *node = new ListNode(val);
            if(result==nullptr) result = current = node;
            else{
                current->next = node;
                current = current->next; 
            }
            l1 = l1->next; 
            l2 = l2->next; 
        }
        while(l1 or l2){
            int val = carry+(l1?l1->val:l2->val); 
            carry = (val/10)%10;
            if(carry) val%=10;
            ListNode *node = new ListNode(val);
            current->next = node; 
            current = current->next; 
            if(l1) l1 =  l1->next; 
            else l2 = l2->next; 
        }
        if(carry) current->next = new ListNode(carry);
        return result;
    }
};