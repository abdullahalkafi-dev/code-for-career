#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l(10, 9);
    cout << l.size() << endl;

    cout << *l.begin();

    for (auto it = l.begin(); it != l.end(); it++)
    {

        cout << *it << endl;
    }

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}