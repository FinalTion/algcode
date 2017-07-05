/*
牛牛举办了一次编程比赛,参加比赛的有3*n个选手,每个选手都有一个水平值a_i.现在要将这些选手进行组队,
一共组成n个队伍,即每个队伍3人.牛牛发现队伍的水平值等于该队伍队员中第二高水平值。
例如:
一个队伍三个队员的水平值分别是3,3,3.那么队伍的水平值是3
一个队伍三个队员的水平值分别是3,2,3.那么队伍的水平值是3
一个队伍三个队员的水平值分别是1,5,2.那么队伍的水平值是2
为了让比赛更有看点,牛牛想安排队伍使所有队伍的水平值总和最大。
如样例所示:
如果牛牛把6个队员划分到两个队伍
如果方案为:
team1:{1,2,5}, team2:{5,5,8}, 这时候水平值总和为7.
而如果方案为:
team1:{2,5,8}, team2:{1,5,5}, 这时候水平值总和为10.
没有比总和为10更大的方案,所以输出10.
*/

#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <iterator>
#include <set>
using namespace std;
int main()
{
    int n;
    vector<int64_t> a;
    while(cin>>n)
    {
        a.resize(3*n);
        for(int i=0; i<3*n; i++)
        {
            cin>>a[i];
        }
        std::sort(a.begin(), a.end());
        int64_t maxNum = 0;
        for(int i=3*n-2, k=0; k<n; i-=2,k++)
        {
            maxNum += a[i];
        }
        cout<<maxNum<<endl;
    }
    return 0;
}