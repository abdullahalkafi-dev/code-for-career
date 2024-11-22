#include <bits/stdc++.h>

using namespace std;

int *p;
int *r;
void fun()
{
    int x = 10;
    r = new int;
    *r = 100;
    p = &x;
    cout << "fun=" << "p=" << *p << " " << "r=" << *r << endl;
    return;
}

int main()
{
    fun();
    cout << "fun=" << "p=" << *p << " " << "r=" << *r << endl;
    return 0;
}
