//斐波那契数列
class Solution {
public:
    int Fibonacci(int n) 
    {
        int result[2] = {0, 1};
        if (n < 2)
            return result[n];
        int one = 0;
        int two = 1;
        int three = 0;
        for (int i = 2; i <= n; ++i)
        {
            three = one + two;
            one = two;
            two = three;
        }
        return three;
    }
};