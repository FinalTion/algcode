using namespace std;

int n;
int num[55];
int main(){
    cin >> n;
    for(int i = 0 ; i < n; i++) 
        cin >> num[i];
    sort(num,num + n);
    for(int i = 0; i < n - 1; i++)
    {
        if(num[i] == num[i + 1] || num[i + 1] > num[i] + 2)
        {
            cout << "mistake"<< endl;
            return 0;
        }
    }

    int cnt = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(num[i + 1] == num[i] + 2) 
            cnt++;
    }
    if(cnt > 1)
    {
        cout << "mistake"<< endl;
        return 0;
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(num[i + 1] == num[i] + 2)
        {
            cout << num[i] + 1 << endl;
            return 0;
        }
    }
    if(num[0] == 1)
    {
        cout << num[n-1] + 1 << endl;
    }else
    {
        cout << num[0] - 1 << " " << num[n-1] + 1 << endl;
    }
    return 0;
}