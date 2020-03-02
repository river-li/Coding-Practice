/*
 * 反转一个单链表。


   示例:

    输入: 1->2->3->4->5->NULL
    输出: 5->4->3->2->1->NULL

 *
 */


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
    ListNode* reverseList(ListNode* head) {
        ListNode* result;
        ListNode* pointer;
        if(head==NULL) return head;
        result=NULL;
        pointer=head;

        while(pointer!=NULL){
            ListNode * temp=pointer->next;
            pointer->next=result;
            result=pointer;
            pointer=temp;
        }
        return result;
    }
};


// 一个节点一个节点插到头部
// 最终要返回的节点本身作为了最后结果链表结尾的那个NULL
