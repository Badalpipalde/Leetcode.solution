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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode *low = head;
        ListNode *high = head->next;
        while(high!=nullptr){
            if(low->val==high->val){
                low->next = high->next;
                high = high->next;
            }
            else{
                high = high->next;
                low = low->next;
            }

        }
        return head;
    }
};