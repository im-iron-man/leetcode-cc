/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head) return false;
        ListNode *fast = head;
        ListNode *slow = head;
        while (1) {
            if (fast->next) fast = fast->next; else break;
            if (fast->next) fast = fast->next; else break;
            slow = slow->next;
            if (fast == slow) return true;
        }
        return false;
    }
};