/* 
小牛牛是牛牛王国的将军,为了训练出精锐的部队,他会对新兵进行训练。部队进入了n个新兵,每个新兵有一个
战斗力值和潜力值,当两个新兵进行决斗时,总是战斗力值高的获胜。获胜的新兵的战斗力值就会变成对手的
潜力值 + 自己的战斗力值 - 对手的战斗力值。败者将会被淘汰。若两者战斗力值一样,则会同归于尽,
双双被淘汰(除了考察的那个新兵之外，其他新兵之间不会发生战斗) 。小牛牛想知道通过互相决斗之后新兵中
战斗力值+潜力值最高的一个可能达到多少,你能帮助小牛牛将军求出来吗?
*/
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    long long maxZhan = 0, add = 0, maxSum = 0, tZhan, tQian;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tZhan >> tQian;
        //潜力比战斗力大，记录潜力与战力差的总和和其中最高的战斗力
        if(tZhan < tQian)    maxZhan = max(maxZhan, tZhan), add += tQian - tZhan;
        //否则，记录最大的潜力、战力和
        else    maxSum = max(maxSum, tZhan + tQian);
    }
    cout << add + max(2 * maxZhan, maxSum) << endl;
    return 0;
}