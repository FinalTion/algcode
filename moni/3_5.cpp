/*
牛牛定义排序子序列为一个数组中一段连续的子序列,并且这段子序列是非递增或者非递减排序的。
牛牛有一个长度为n的整数数组A,他现在有一个任务是把数组A分为若干段排序子序列,牛牛想知道他最少
可以把这个数组分为几段排序子序列.
如样例所示,牛牛可以把数组A划分为[1,2,3]和[2,2,1]两个排序子序列,至少需要划分为2个排序子序列,所以输出2
*/

#include <iostream>
using namespace std;
 
const int MAXN=100005;
int N;
int A[MAXN],res=0;
 
int f1(int i)   //非递减
{
    while((i!=N-1)&&A[i]<=A[i+1])
        ++i;
    return i;
}
int f2(int i)   //非递增
{
    while((i!=N-1)&&A[i]>=A[i+1])
        ++i;
    return i;
}
int main()
{
    cin>>N;
    for(int i=0;i<N;++i)
        cin>>A[i];
    int i=0;
    while(i!=N)
    {
        while(A[i]==A[i+1])     //相等就跳过
            ++i;
        if(A[i]<A[i+1])
        {
            i=f1(i)+1;
            ++res;
        }
        else
        {
            i=f2(i)+1;
            ++res;
        }
    }
    cout<<res<<endl;
    return 0;
}
