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
        // The trick is that slow and fast pointers always meet when there is a cycle
        // in a linked list
        if(head == NULL || head->next == NULL)  return false;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) {
                return true;
            }
        }
        return false;
    }
};