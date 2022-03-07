
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result=nullptr, *current=nullptr;
        while(list1 and list2){
            if(result == nullptr) result = current = (list1->val<list2->val?list1:list2);
            else current->next = (list1->val<list2->val?list1:list2), current = current->next;
            list1->val<list2->val?(list1 = list1->next):(list2 = list2->next);
        }
        if(list1){
            if(result) current->next = list1; 
            else result = list1; 
        }
        else{
            if(result) current->next = list2; 
            else result = list2; 
        }
        return result; 
    }
};