/*
给出一个区间[a, b]，计算区间内“神奇数”的个数。
神奇数的定义：存在不同位置的两个数位，组成一个两位数（且不含前导0），且这个两位数为质数。
比如：153，可以使用数字3和数字1组成13，13是质数，满足神奇数。同样153可以找到31和53也为质数，
只要找到一个质数即满足神奇数。
*/

#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
 
bool isPrime(int num) 
{
    for (int i = 2;i <= sqrt(num); i++) 
	{
        if (num % i == 0) 
            return false;
    }
    return true;
}
 
int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    if(b <= 10)
    {
        cout << 0;
        return 0;
    }
    for(int i = a;i <= b; i++)
    {
        bool isS = false;
        vector<int> arr;
        int tmp = i;
        while (tmp)
        {
            arr.push_back(tmp % 10);
            tmp /= 10;
        }
 
        //判断每个数是不是神奇的数
        for (int j = 0; j< arr.size(); j++)
        {
            if(arr[j]==0)
            {
                continue;
            }
            //j：第一位，k：第二位
            for(int k=0; k< arr.size(); k++)
            {
                if(k==j)
                {
                    continue;
                }
                //这个两位数
                int now = arr[j] * 10 + arr[k];
                if(isPrime(now))
                {
                    //一旦是神奇的数，那么就不需要检测j确定、k循环的情况了
                    isS = true;
                    break;
                }
            }
            //如果已经是神奇的数，就不用再检测后面不同j的情况了
            if (isS)
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}