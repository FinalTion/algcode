/*
牛牛想在[a, b]区间内找到一些数满足可以被一个整数c整除,现在你需要帮助牛牛统计区间内一共有多少个这样的数满足条件？ 
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    while(a % c != 0) 
        a++;
    if(a > b)    
        cout << 0 << endl;
    else
        cout << (b - a) / c + 1 << endl;
    return 0;
}