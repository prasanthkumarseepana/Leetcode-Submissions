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
    ListNode* reverseList(ListNode* head) {
        //Create dummy node and assign to NULL
        //Create next node & point immediately to next node of head and break head->next and point to dummy node(NULL)
        //Then take dummy node, point to head(1). and then point head to the next(2)
        //Again point head's next to the next(3) and point 2's next to 1
        // Basically head is moving forward
        //At the end, dummy node will be at the end which is our head of current rev linked list
        
        ListNode* newHead=NULL; //Dummy node
        while(head!=NULL){
            ListNode *next=head->next;//Pointing next to the next of current head
            head->next=newHead;//Pointing the head's next to the dummy(back)
            newHead=head;//Now dummy is the head;
            head=next;//Head moving to next node(2)
        }
        return newHead;
    }
};