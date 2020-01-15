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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *root = NULL;
        ListNode **tmp = &root;
        int last;
        
        while (head) {
            if (root == NULL || head->val != last) {
                last = head->val;
                *tmp = new ListNode(last);
                tmp = &(*tmp)->next;
            }
            head = head->next;
        }
        
        return root;
    }
};