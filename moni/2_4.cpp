/*
牛牛在二维坐标系中画了N个点，且都是整点。现在牛牛想画出一个矩形，使得这N个点都在矩形内或者在矩形上。
矩形的边均平行于坐标轴。牛牛希望矩形的面积最小。请你帮助牛牛计算下最小矩形的面积。 
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int minx = 10000, maxx = -100000, miny = 100000, maxy = -100000;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        minx = min(minx,x);
        maxx = max(maxx,x);
        miny = min(miny,y);
        maxy = max(maxy,y);
    }
    cout << (maxx - minx) * (maxy - miny) << endl;
    return 0;
}