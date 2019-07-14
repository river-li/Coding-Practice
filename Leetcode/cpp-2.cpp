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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0;
        ListNode *res=l1;
        while(l1->next!=NULL && l2->next!=NULL){
            int sum=l1->val+l2->val+c;
            if(sum<10){
                c=0;
            }
            else{
                sum=sum-10;
                c=1;
            }
            l1->val=sum;
            l1=l1->next;
            l2=l2->next;
        }

        l1->val=l1->val+l2->val+c;
        if(l1->val<10) c=0;
        else {c=1;l1->val-=10;}

        if(l1->next==NULL &&l2->next!=NULL)
        {
            while(l2->next!=NULL){
                l1->next=l2->next;
                l2->next->val+=c;
                if(l2->next->val<10)c=0;
                else{l2->next->val-=10; c=1;}
                l2=l2->next;
                l1=l1->next;
            }
        }

        else if(l1->next!=NULL &&l2->next==NULL){
            while(l1->next!=NULL){
                l1->next->val+=c;
                if(l1->next->val<10)c=0;
                else{c=1;l1->next->val-=10;}
                l1=l1->next;
            }
        }
        if(c)
            l1->next=new ListNode(1);
        return res;
    }

};