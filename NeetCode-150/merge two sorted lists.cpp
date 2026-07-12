class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        
        // A dummy node simplifies head management dramatically
        ListNode dummy(0);
        ListNode* curr = &dummy;
        
        while (p1 || p2) {
            // Your nested ternary logic works great here!
            ListNode* end = (p1 == nullptr) ? p2 : ((p2 == nullptr) ? p1 : nullptr);
            if (end != nullptr) {
                curr->next = end;
                break; // Break out of the loop since we attached the remainder
            }

            ListNode* minnode = nullptr;
            if (p1->val > p2->val) {
                minnode = p2;   // Fixed: assigned to the outer variable
                p2 = p2->next;      
            } else {
                // Combines both < and == cases elegantly
                minnode = p1;
                p1 = p1->next;
            }
            
            curr->next = minnode;
            curr = minnode;                                   
        }
        
        return dummy.next; // The actual merged list starts right after the dummy
    }
};
