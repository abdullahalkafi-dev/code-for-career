#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[5];
    int *b = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    cout << "static array finished" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << endl;
    }
    return 0;
}