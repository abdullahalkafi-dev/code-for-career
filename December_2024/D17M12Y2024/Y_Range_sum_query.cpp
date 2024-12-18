#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 1);       // 1 2 3  4   5   6
    vector<int> prefixArr(n + 1); // 1 3 6 10  15  21
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        prefixArr[i] = arr[i] + prefixArr[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
     cout << prefixArr[r] - prefixArr[l - 1] << endl;
      
    }

    return 0;
}