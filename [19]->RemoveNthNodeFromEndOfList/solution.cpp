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
    int length(ListNode* head){
        ListNode* curr = head;
        int i=0;
        while (curr){
            curr = curr->next;
            i++;
        }
        return i;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = length(head);  
        ListNode* prev = nullptr;
        ListNode* curr = head;
        if (size == n)
            return head->next;
        for (int i=0;i<size-n;i++){
            prev=curr;
            curr=curr->next;
        }
        prev->next = curr->next;
        return head;      

    }
};
