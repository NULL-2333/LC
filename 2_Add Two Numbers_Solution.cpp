/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //首先建立一个链表用于记录结果，再复制出一个用于遍历构建链表
 //对于加法采用的策略是逐位相加，记录进位为c
 //若最后c=1则再向后建立一个链表节点
 //最后返回记录结果的链表的初始节点的next节点
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* r=new ListNode(0);
        ListNode* k=r;
        int c=0;
        while(l1||l2){
            int n1=l1?l1->val:0;
            int n2=l2?l2->val:0;
            int s=n1+n2+c;
            c=s/10;
            k->next=new ListNode(s%10);
            k=k->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        if(c==1) k->next=new ListNode(1);
        r=r->next;
        return r;
    }
};