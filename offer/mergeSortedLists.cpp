//合并两个排序的链表
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if (!pHead1)
            return pHead2;
        if (!pHead2)
            return pHead1;
        ListNode *mergHead = NULL;
        if (pHead1->val < pHead2->val)
        {
            mergHead = pHead1;
            mergHead->next = Merge(pHead1->next, pHead2);
        }
        else
        {
            mergHead = pHead2;
            mergHead->next = Merge(pHead1, pHead2->next);
        }
        return mergHead;

    }
};