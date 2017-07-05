#include <iostream>
#include <vector>
#include <set>
using namespace std;

int n;
set<vector <int> > s;
vector<int> x;
int main() 
{
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        int tmp;
        cin >> tmp;
        x.push_back(tmp);
    }
    for(int i = 0; i < n; i++) 
    {
        for(int j = i; j < n; j++) 
        {
            if(i != j) 
            {
                swap(x[i], x[j]);
                s.insert(x);
                swap(x[i], x[j]);
            }
        }
    }
    cout << s.size() << endl;
    return 0;
}