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
        ListNode *L3 = new ListNode(0);
        ListNode *head = L3;

        while(list1!=nullptr && list2!=nullptr){
            if (list1->val<list2->val){
                L3->next = list1;
                list1 = list1->next;
            }
            else {
                L3->next = list2;
                list2 = list2->next;
            }
            L3=L3->next;
        }
          if(list1!=nullptr){
            L3->next = list1;
        }
        if(list2!=nullptr){
            L3->next = list2;
        }
        return head->next;
    }
};
