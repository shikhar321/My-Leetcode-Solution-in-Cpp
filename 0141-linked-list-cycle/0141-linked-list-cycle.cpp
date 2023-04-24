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
        int count = 1;
        if(head == NULL) {
            return false;
        }
        while(head->next != NULL) {
            count++;
            head = head->next;
            if(count>10001) {
                return true;
            }
        }
        return false;
    }
};