/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#define SET_NEXT(t, l)             \
    {                              \
        *t = new ListNode(l->val); \
        t = &(*t)->next;           \
        l = l->next;               \
    }

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *root = NULL;
        ListNode **tmp = &root;
        while (l1 && l2) {
            if (l1->val < l2->val) SET_NEXT(tmp, l1)
            else                   SET_NEXT(tmp, l2)
        }
        while (l1) SET_NEXT(tmp, l1)
        while (l2) SET_NEXT(tmp, l2)
        return root;
    }
};