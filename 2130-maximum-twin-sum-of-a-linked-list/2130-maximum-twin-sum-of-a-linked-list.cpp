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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        stack<int> s;
        while(fast != NULL) {
            s.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        
        int maxi = INT_MIN;
        while(slow != NULL) {
            int temp = s.top();
            maxi = max(maxi, temp + slow->val);
            slow = slow->next;
            s.pop();
        }
        return maxi;
    }
};