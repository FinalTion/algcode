#include <iostream>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 1; i < s.size(); i++) 
    {
        if(s[i] != s[i - 1]) 
            ans++;
    }
    if(s.size() == 1) 
        ans = 0;
    ans++;
    cout << ans << endl;
    return 0;
}