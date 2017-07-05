//重建二叉树
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) 
    {
        if(pre.size()==0 || vin.size() == 0)
            return NULL;
     	TreeNode *root=new TreeNode(pre[0]);
        int i=0;
        for(;i<vin.size();++i)
        {
            if(vin[i]==pre[0])
                break;
        }
        if (i == vin.size())
            return NULL;
        vector<int> left_pre;
        vector<int> left_vin;
        for(int j=0;j<i;++j)
        {
            left_pre.push_back(pre[j+1]);
            left_vin.push_back(vin[j]);
        }
        vector<int> right_pre;
        vector<int> right_vin;
        for(int j=i+1;j<pre.size();++j)
        {
            right_pre.push_back(pre[j]);
            right_vin.push_back(vin[j]);
        }
        root->left=reConstructBinaryTree(left_pre,left_vin);
        root->right=reConstructBinaryTree(right_pre,right_vin);
        return root;
    }
};