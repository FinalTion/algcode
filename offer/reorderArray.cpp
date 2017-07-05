//调整数组顺序使奇数位于偶数前面
class Solution {
public:
    void reOrderArray(vector<int> &array) 
    {
		vector<int>res;
        for(int i=0;i<array.size();i++)
        {
            if((array[i]& 0x1)==1)
            {
                res.push_back(array[i]);
                 
            }
        }
        for(int j=0;j<array.size();j++)
        {
            if((array[j]&0x1)==0)
                res.push_back(array[j]);
        }
        array= res;
    }
};