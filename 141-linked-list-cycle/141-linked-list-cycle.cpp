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
    bool hasCycle(ListNode *head) 
    {
       if(head == nullptr or head->next == nullptr)
        {
            return false;
        }
        
        if(head->next == head)
        {
            return true;
        }
        
        ListNode *slow= head;
        ListNode *fast = head;
        
        while(slow and fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            //check loop
            if(slow == fast)
            {
                return true;
            }
        }
        
        return false;
        
    }
};