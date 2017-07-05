/*
牛牛想对一个数做若干次变换，直到这个数只剩下一位数字。
变换的规则是：将这个数变成 所有位数上的数字的乘积。比如285经过一次变换后转化成2*8*5=80.
问题是，要做多少次变换，使得这个数变成个位数
*/
#include<iostream>
using namespace std;

int main()
{
    int n, temp, count = 0;
    cin >> n;
    while(n > 9)
    {
        temp = 1;
        while(n)
        {
            temp *= n % 10;
            n /= 10;
        }
        n = temp;
        count++;
    }
    cout << count << endl;
    return 0;
}