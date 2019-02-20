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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l;
        ListNode* p; 
        l= (ListNode *) malloc(sizeof(ListNode));
        l->next=NULL;
        l->val=NULL;
        p=l;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val <=l2->val)
            {
                l->next=l1;
                l=l->next;
                l1=l1->next;
            }
            else
            {
                l->next=l2;
                l=l->next;
                l2=l2->next;
            }
        }
        if(l1!=NULL)
            l->next=l1;
        else if(l2!=NULL)
            l->next=l2;
        
        return p->next;
    }
};
