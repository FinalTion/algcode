//从尾到头打印链表
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) 
    {
        if (head != NULL)
         {
            if(head->next != NULL)
                printListFromTailToHead(head->next);
            result.push_back(head->val);   
        }
        return result;
    }
private:
    vector<int> result;
};
/*
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) 
    {
        stack<ListNode*> nodes;
        ListNode* pNode = head;
        while(pNode != NULL)
        {
            nodes.push(pNode);
            pNode = pNode->next;
        }
        while(!nodes.empty())
        {
            pNode = nodes.top();
            result.push_back(pNode->val);
            nodes.pop();
        }
        return result;
    }
private:
    vector<int> result;
};
*/