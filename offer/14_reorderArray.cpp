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
/* 相对顺序有改变
class Solution {
public:
    void reOrderArray(vector<int> &array) 
    {
        if(array.empty())
            return;
        int len = array.size();
        int pBegin = 0;
        int pEnd = len - 1;

        while(pBegin < pEnd)
        {
            // 向后移动pBegin，直到它指向偶数
            while(pBegin < pEnd && (array[pBegin] & 0x1) != 0)
                pBegin ++;

            // 向前移动pEnd，直到它指向奇数
            while(pBegin < pEnd && (array[pEnd] & 0x1) == 0)
                pEnd --;

            if(pBegin < pEnd)
            {
                int temp = array[pBegin];
                array[pBegin] = array[pEnd];
                array[pEnd] = temp;
            }
        }
    }
};