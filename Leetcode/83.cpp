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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode * p=head;
        ListNode *current=head;
        while(current!=NULL){
            if(p->val==current->val) 
                current=current->next;
            else
            {
                p->next=current;
                p=current;
                current=current->next;
            }
        }
        p->next=NULL;
        return head;
    }
};
