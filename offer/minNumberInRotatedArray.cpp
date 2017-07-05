//旋转数组中的最小数字
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) 
    {
        if (rotateArray.empty())
            return 0;
        int len = rotateArray.size();
        int index1 = 0, index2 = len - 1, indexMid = 0;
        while (rotateArray[index1] >= rotateArray[index2])
        {
            if (index2 - index1 == 1)
           	{
                indexMid = index2;
                break;
            }
            indexMid = (index2 + index1)>>1;
            if (rotateArray[index1] == rotateArray[index2] && rotateArray[indexMid] == rotateArray[index1])
                return search(rotateArray);
            if (rotateArray[indexMid] >= rotateArray[index1])
                index1 = indexMid;
            if (rotateArray[indexMid] <= rotateArray[index2])
                index2 = indexMid;
        }
        return rotateArray[indexMid];
    }
    
    int search(vector<int> & v)
    {
        int tmp = v[0];
        for (int i = 0; i < v.size(); i++)
        {
           tmp = tmp > v[i] ? v[i] : tmp;
        }
        return tmp;
    }   
};