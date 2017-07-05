/*
牛牛有一个数组，里面的数可能不相等，现在他想把数组变为：所有的数都相等。问是否可行。
牛牛可以进行的操作是：将数组中的任意一个数改为这个数的两倍。
这个操作的使用次数不限，也可以不使用，并且可以对同一个位置使用多次。
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) 
	{
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) 
	{
        while (a[i] % 2 == 0) 
			a[i] /= 2;
    }
    for (int i = 0; i < n; ++i) 
	{
        if (a[i] != a[0]) 
		{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}