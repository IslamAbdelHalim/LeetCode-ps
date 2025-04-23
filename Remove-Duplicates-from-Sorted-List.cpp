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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* first = head;

        while (first && first->next) {
            if (first->val == first->next->val) {
                ListNode* temp = first->next;
                first->next = temp->next;
                temp->next = nullptr;
                delete temp;
            } else {
                first = first->next;
            }
        }

        return head;
    }
};