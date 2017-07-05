#include <iostream>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < s.size(); i++) 
    {
        if(i % 2 == 0) 
        {
            if(s[i] != 'W') 
                cnt1++;
        } else 
        {
            if(s[i] != 'B') 
                cnt1++;
        }
    }
    for(int i = 0; i < s.size(); i++) 
    {
        if(i % 2 == 0) 
        {
            if(s[i] != 'B') 
                cnt2++;
        } else 
        {
            if(s[i] != 'W') 
                cnt2++;
        }
    }
    cout << min(cnt1, cnt2) << endl;
    return 0;
}