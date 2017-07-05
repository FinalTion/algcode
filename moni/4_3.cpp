#include <iostream>
using namespace std;

const int maxn = 200;


int main() 
{
    int a[maxn], n, A;
    cin>>n>>A;
    for(int i = 0; i < n; i++) 
        cin>>a[i];
    for(int i = 0; i < n; i++) 
    {
        if(a[i] == A) 
            A += A;
    }
   	cout<<A<<endl;
    return 0;
}