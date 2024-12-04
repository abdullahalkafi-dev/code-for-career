#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    while (cin >> s)
    {
        sort(&s[0], &s[0] + s.length());

        cout << s << endl;
    }

    return 0;
}
