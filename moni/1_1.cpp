#include <iostream>
using namespace std;

int a[55];
int mi,ma;
int n;
int main()
{
    cin >> mi >> ma;
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    int ans = 0;
    for(int i = mi; i <= ma; i++)
    {
        int flag = 1;
        for(int j = 0; j < n; j++){
            if( (i >= a[j] * 2 && i <= a[j] * 10) || (i * 2 <= a[j] && i * 10 >= a[j]) )
            {
                flag = 0;
            }
        }
        if(flag) 
            ans++;
    }
    cout << ans << endl;
}