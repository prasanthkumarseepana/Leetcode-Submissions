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
public:                             //Using Tortoise Method
    ListNode* middleNode(ListNode* head) {//Defining the node pointer
      
        ListNode *slow=head, *fast=head;//Here defining nodes iterators
        while(fast && fast->next){//Until fast pointer reaches null, keep moving 
            slow=slow->next;//updating values
            fast=fast->next->next;
        }
        return slow;
    }
};