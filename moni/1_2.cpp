#include <iostream>
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string calc(string s)
{
    vector<string> v;
    for(int i = 0; i < (int)s.length(); i++)
    {
        string tmp = s;
        for(int j = 0; j < (int)s.length(); j++) 
            tmp[j] = s[(j + i) % s.length()];
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    return v[0];
}
int main(){
    set<string> s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.insert(calc(x));
    }
    cout << s.size() << endl;
}