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
        ListNode *p = nullptr;
        ListNode *q = nullptr;
        while(head!=nullptr){
            p = q;
            q = head;
            head = head->next;
            q->next = p;
        }
           
        return q;
    }
};