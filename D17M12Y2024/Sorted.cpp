#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int flag = 1;

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 1; j < n; j++)
        {
            if (a[j] < a[j - 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}