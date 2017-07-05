/* 
牛牛现在有一个n个数组成的数列,牛牛现在想取一个连续的子序列,
并且这个子序列还必须得满足:最多只改变一个数,就可以使得这个连续的子序列是一个严格上升的子序列,
牛牛想知道这个连续子序列最长的长度是多少。
*/

#include <iostream>
#include <algorithm>
 
using namespace std;
 
const int MAX_N = 1E5;
int n;
int arr[MAX_N];
 
int main(int argc, char *argv[])
{
    cin >> n;
    int maxLen[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        maxLen[i] = 1;
    }
    for (int i = 1; i < n; ++i)
    {
        bool flag = true;
        for (int j = i-1; j >= 0 ; --j)
        {
            if (arr[j] < arr[j+1])
            {
                maxLen[i]++;
            }else{
                if (j-1>=0 && arr[j+1]-arr[j-1]>=1 && flag)
                {
                    maxLen[i]++;
                    j--;
                    flag = false;
                }else if(j+2<n && arr[j+2]-arr[j]>=1 && flag){
                    flag = false;
                }else{
                    break;
                }
            }
        }
    }
    sort(maxLen,maxLen+n);
    cout << maxLen[n-1]+1 << endl;
    return 0;
}