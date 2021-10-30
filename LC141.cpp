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
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(true)
        {
            if(slow != NULL)
                slow = slow->next;
            else
                break;
            
            if(fast->next != NULL)
                fast = fast->next->next;
            else
                break;
            
            if(fast == slow)
                return true;
            
            if(fast == NULL)
                return false;
        }
        
        return false;
    }
};
