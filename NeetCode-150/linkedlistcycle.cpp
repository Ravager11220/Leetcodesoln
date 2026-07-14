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
    if (head == nullptr || head->next == nullptr) return false;
    
    ListNode *slow = head;
    ListNode *fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;          // Moves 1 step
        fast = fast->next->next;    // Moves 2 steps
        
        if (slow == fast) {         // They met! A cycle exists.
            return true;
        }
    }
    
    return false; // Fast pointer hit the end, no cycle.
}
};
