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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
         ListNode * start = new ListNode();//Creating dummy node & assigning to head
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     //Fast is n steps ahead of slow

        for(int i = 1; i <= n; ++i)
            fast = fast->next;//Until fast is n step ahead of slow, forward it
    
        while(fast->next != NULL)
        {
            fast = fast->next;//Forwarding both
            slow = slow->next;
        }
        
        slow->next = slow->next->next;//Pointing next of slow to next next of slow
        
        return start->next;
        
        
    }
};