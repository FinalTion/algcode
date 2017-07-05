#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int ans = 0;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == 'A' && s2[i] == 'T') ans++;
        if(s1[i] == 'T' && s2[i] == 'A') ans++;
        if(s1[i] == 'C' && s2[i] == 'G') ans++;
        if(s1[i] == 'G' && s2[i] == 'C') ans++;
    }
    cout << s1.size() - ans << endl;
    return 0;
}