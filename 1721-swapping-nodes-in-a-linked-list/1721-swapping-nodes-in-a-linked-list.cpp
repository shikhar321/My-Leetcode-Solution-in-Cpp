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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* pos1 = head;
        for(int i = 0; i<k-1; i++) {
            pos1 = pos1->next;
        }
        int num1 = pos1->val;
        ListNode* fast = pos1;
        ListNode* slow = head;
        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        swap(pos1->val, slow->val);
        return head;
    }
};