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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode *> stackA, stackB;
        while (headA) {
            stackA.push(headA);
            headA = headA->next;
        }
        while (headB) {
            stackB.push(headB);
            headB = headB->next;
        }
        
        ListNode *r = NULL, *a, *b;
        while (!stackA.empty() && !stackB.empty()) {
            a = stackA.top(); b = stackB.top();
            if (a != b) break;
            r = a;
            stackA.pop(); stackB.pop();
        }
        return r;
    }
};