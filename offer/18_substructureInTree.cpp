//树的子结构
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool result = false;
        if (pRoot1 && pRoot2)
        {
            result = hasSubcore(pRoot1, pRoot2);
            if (!result)
                result = HasSubtree(pRoot1->left, pRoot2);
            if (!result)
                result = HasSubtree(pRoot1->right, pRoot2);     
        }
        return result;
    }

    bool hasSubcore(TreeNode *p1, TreeNode *p2)
    {
        if(!p2)
        	return true;//必须先判断P2是否为空
    	if(!p1)
        	return false;
    	if(p1->val != p2->val)
        	return false;
		return hasSubcore(p1->left, p2->left) && hasSubcore(p1->right, p2->right);

    }

};