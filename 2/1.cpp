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
        ListNode *p1 = l1,*p2 = l2;
        ListNode *newHead = new ListNode(0);
        ListNode *p = newHead;
        int add = 0;
        while (p1 != NULL && p2 != NULL){
            int tmp = p1-> val + p2->val + add;
            ListNode *newNode = new ListNode(tmp%10);
            add = tmp / 10;
            p->next = newNode;
            p = p->next;
            p1 = p1->next;
            p2 = p2->next;
        }
        while (p1){
            int tmp = p1-> val + add; 
            ListNode *newNode = new ListNode(tmp%10);
            add = tmp / 10;
            p->next = newNode;
            p = p->next;
            p1 = p1->next;
        }
        while (p2){
            int tmp = p2-> val + add; 
            ListNode *newNode = new ListNode(tmp%10);
            add = tmp / 10;
            p->next = newNode;
            p = p->next;
            p2 = p2->next;
        }
        if (add){
            ListNode *newNode = new ListNode(add);
            p->next = newNode;
        }
        return newHead->next;
    }
};