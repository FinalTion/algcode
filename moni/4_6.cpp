#include <iostream>
using namespace std;

const int maxn = 20 + 5;

int n;
int h[maxn];
int main() 
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) 
        scanf("%d", &h[i]);
    sort(h, h + n);
    int ans = 0;
    for(int i = 2; i < n; i++) 
        ans = max(ans, h[i] - h[i - 2]);
    cout << ans << endl;
}