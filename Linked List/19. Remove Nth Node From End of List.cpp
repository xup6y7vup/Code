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
    void deleteHead(ListNode*& head){
        if(!head) return;
        ListNode* temp = head;
        head = head -> next;
        delete temp;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head) return nullptr;

        int length = 0;
        ListNode* p = head;
        while(p != nullptr){
            length++;
            p = p -> next;
        }

        if(n == length){
            deleteHead(head);
            return head;
        }

        int index = length - n;
        p = head;
        for(int i = 0 ; i < index - 1 ; i++){
            p = p-> next;
        }
        ListNode* nodeToDelete = p -> next;
        p -> next = nodeToDelete->next;
        delete nodeToDelete;

        return head;

    }
};
