//和为S的两个数
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) 
    {
        vector<int> result;
        int length = array.size();
        if(array.empty() || length < 2)
            return result;
        int begin = 0;
        int end = length - 1;

        while(end > begin)
        {
            int curSum = array[begin] + array[end];
            //相差最大，则乘积最小，即第一次符合条件的组合
            if(curSum == sum)
            {
                result.push_back(array[begin]);
                result.push_back(array[end]);
                break;
            }
            else if(curSum > sum)
                end--;
            else
                begin++;
        }
        return result;
    }
};