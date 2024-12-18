#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n+1);
    vector<long long int> preArr(n+1);
      
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        preArr[i] = a[i] + preArr[i - 1];
    }
      reverse(preArr.begin()+1,preArr.end());
    for (int i = 1; i <= n; i++)
    {
        cout << preArr[i]<<" ";
    }
    return 0;
}