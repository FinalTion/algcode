/*
牛牛有N个字符串，他想将这些字符串分类，他认为两个字符串A和B属于同一类需要满足以下条件：
A中交换任意位置的两个字符，最终可以得到B，交换的次数不限。比如：abc与bca就是同一类字符串。
现在牛牛想知道这N个字符串可以分成几类。 
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> v;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string x;
        cin >> x;
        sort(x.begin(), x.end());
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    string tmp("");
    for(int i = 0; i < v.size(); i++) {
        if(tmp != v[i]) tmp = v[i], ans++;
    }
    cout << ans << endl;
}