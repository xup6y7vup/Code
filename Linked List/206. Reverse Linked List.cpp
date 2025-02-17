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
    ListNode* reverseList(ListNode* head) {
        ListNode* ptr = head;
        ListNode* q = NULL;

        while(head != NULL){
            head = head -> next;
            ptr -> next = q;
            q = ptr;
            ptr = head;
        }

        return q;

    }
};
