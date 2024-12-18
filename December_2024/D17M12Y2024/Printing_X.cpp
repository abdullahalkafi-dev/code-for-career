#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int half = n / 2;

    for (int i = 0; i < half; i++)

    {
        int left = i;
        int right = n - i - 1;
        int gap = right - left - 1;
        for (int k = 0; k < left; k++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int k = 0; k < gap; k++)
        {
            cout << " ";
        }
        cout << "/";
        cout << endl;
    }

    for (int k = 0; k < half; k++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    for (int i = half - 1; i >= 0; i--)

    {
        int left = i;
        int right = n - i - 1;
        int gap = right - left - 1;
        for (int k = 0; k < left; k++)
        {
            cout << " ";
        }
        cout << "/";
        for (int k = 0; k < gap; k++)
        {
            cout << " ";
        }
        cout << "\\";
        cout << endl;
    }
    return 0;
}