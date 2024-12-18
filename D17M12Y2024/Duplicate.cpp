#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> arr(a);
 ;

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
      
    }
 sort(arr.begin(),arr.end());
    int flag = 0;
     for (int i=1;i<a;i++){

        if(arr[i] ==arr[i-1]){
            flag=1;
            break;
        }
     }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}