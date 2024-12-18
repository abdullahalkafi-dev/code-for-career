#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v;
    vector<int> v(50, 2);
    cout << v.size() << endl;
    vector<int> v2(&v[0], &v[10]);

    for (long long int i = 1; i < (v2.size()); i++)
    {
        cout << v2[i] << endl;
    }

    return 0;
}