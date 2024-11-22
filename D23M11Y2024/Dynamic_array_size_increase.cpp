#include <bits/stdc++.h>
using namespace std;

//by static array
// int main()
// {

//     int a[3];

//     for (int i = 0; i < 3; i++)
//     {
//         cin >> a[i];
//     }
//     int b[5];
//     for (int i = 0; i < 3; i++)
//     {
//         b[i] = a[i];
//     }
//     for (int i = 3; i < 5; i++)
//     {
//         cin >> b[i];
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << b[i] << " ";
//     }
// }

//by dynamic array
int main()
{

    int* a=new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int *b=new int[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    for (int i = 3; i < 5; i++)
    {
        cin >> b[i];
    }
     delete[](a);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
}


