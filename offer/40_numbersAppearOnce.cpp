//数组中只出现一次的数字
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) 
    {
        int length = data.size();
        if (data.empty() || length < 2)
            return;

        int resultExclusiveOR = 0;
        for (int i = 0; i < length; ++ i)
            resultExclusiveOR ^= data[i];

        unsigned int indexOf1 = FindFirstBitIs1(resultExclusiveOR);   

        *num1 = *num2 = 0;
        for (int j = 0; j < length; ++ j)
        {
            if(IsBit1(data[j], indexOf1))
                *num1 ^= data[j];
            else
                *num2 ^= data[j];
        }
    }

    // 找到num从右边数起第一个是1的位
    unsigned int FindFirstBitIs1(int num)
    {
        int indexBit = 0;
        while (((num & 1) == 0) && (indexBit < 8 * sizeof(int)))
        {
            num = num >> 1;
            ++ indexBit;
        }

        return indexBit;
    }

    // 判断数字num的第indexBit位是不是1
    bool IsBit1(int num, unsigned int indexBit)
    {
        num = num >> indexBit;
        return (num & 1);
    }
};