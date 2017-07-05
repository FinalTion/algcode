//二叉树的镜像
class Solution {
public:
    void Mirror(TreeNode *pRoot) 
    {
        if (!pRoot)
            return;
        stack<TreeNode*> Node;
        Node.push(pRoot);
        while (Node.size() > 0)
        {
            TreeNode *pNode = Node.top();
            Node.pop();
            TreeNode *tmp = pNode->left;
        	pNode->left = pNode->right;
        	pNode->right = tmp;
            if (pNode->left)
                Node.push(pNode->left);
            if (pNode->right)
                Node.push(pNode->right);
        }	
    }
};