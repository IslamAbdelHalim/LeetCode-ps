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
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head;
        ListNode* middle;
        int len = 0;
        while (p) {
            len++;
            p = p->next;
        }

        p = head;

        int i = 0;
        while (i < (len / 2)) {
            p = p->next;
            i++;
        }

        return p;
    }
};