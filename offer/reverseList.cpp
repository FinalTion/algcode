//反转链表
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) 
    {
        ListNode *pRevHead = NULL;
        ListNode *pre = NULL;
        ListNode *cur =pHead;
        while (cur)
        {
            ListNode *next = cur->next;
            if (!next)
                pRevHead = cur;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pRevHead;
    }
};