//变态跳台阶
class Solution {
public:
    int jumpFloorII(int number) 
 	{
        if (number <= 0) 
            return 0;
        return pow(2, number - 1);
    }
};