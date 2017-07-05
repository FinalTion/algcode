/*
牛牛手里有一个字符串A，羊羊的手里有一个字符串B，B的长度大于等于A，所以牛牛想把A串变得和B串一样长，
这样羊羊就愿意和牛牛一起玩了。而且A的长度增加到和B串一样长的时候，对应的每一位相等的越多，
羊羊就越喜欢。比如"abc"和"abd"对应相等的位数为2，为前两位。牛牛可以在A的开头或者结尾添加任意字符，
使得长度和B一样。现在问牛牛对A串添加完字符之后，不相等的位数最少有多少位？
*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int maxlen = 0;
    for(int i = 0; i <= b.length() - a.length(); i++)
    {
        int count = 0;
        for(int k = 0; k < a.length(); k++)
        {
            if(a[k] == b[i+k])  count++;
        }
        maxlen = max(count, maxlen);
    }
    cout << a.length() - maxlen << endl;
    return 0;
}