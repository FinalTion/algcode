/* 
牛牛有两个字符串（可能包含空格）,牛牛想找出其中最长的公共连续子串,希望你能帮助他,并输出其长度。 
*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {  
    char s1[55], s2[55];
    gets(s1);
    gets(s2);
    int ans = 0, k;
    for(int i = 0; i < strlen(s1); ++i) { 
        for(int j = 0; j < strlen(s2); ++j) {  
            for(k = 0; s1[i + k] && s2[j + k] && s1[i + k] == s2[j + k]; k++);
            if(k > ans) ans = k; 
        }  
    }
    cout << ans << endl;
    return 0;  
}