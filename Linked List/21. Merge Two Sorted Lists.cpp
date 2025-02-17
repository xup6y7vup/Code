/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptrptr) {}
 *     ListNode(int x) : val(x), next(nullptrptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode dummy(0);
        ListNode* node = &dummy;

        while(list1 && list2){
            if(list1 -> val < list2 -> val){
                node -> next = list1;
                list1 = list1 -> next;
            }else{
                node -> next = list2;
                list2 = list2 -> next;
            }
            node = node -> next;
        }

        if(list1){
            node -> next= list1;
        }else{
            node -> next = list2;
        }
        return dummy.next;
    }
};
