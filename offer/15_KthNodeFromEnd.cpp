//链表中倒数第K个结点
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
    {
        if (pListHead == NULL || k <= 0)
            return NULL;
        ListNode *pA = pListHead;
        for (int i = 0; i < k - 1; i++)
        {
            if (pA->next)
                pA = pA->next;
            else
                return NULL;
        }
        ListNode *pB = pListHead;
        while (pA->next)
        {
            pA = pA->next;
            pB = pB->next;
        }
        return pB;
    }
};