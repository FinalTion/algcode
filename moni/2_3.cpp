/*
牛牛手里有N根木棒,分别编号为1~N,现在他从N根里想取出三根木棒，使得三根木棒构成一个三角形,你能计算出牛牛有多少种取法吗?(考虑两种取法中使用的木棒编号有一个不一样就认为是不同的取法)。 
*/
#include <iostream>
using namespace std;

int v[55];
int check(int a, int b, int c) {
    return a < b + c && b < a + c && c < a + b;
}
int main() {
    int n, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> v[i];
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(check(v[i], v[j], v[k])) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}