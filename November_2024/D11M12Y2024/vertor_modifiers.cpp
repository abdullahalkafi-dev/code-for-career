#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6,2};

    vector<int> v2;
   
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }
    //  v.insert(v.begin()+2,{7, 8, 9});
    // v.erase(v.begin()+2,v.begin()+5);
    replace(v.begin(),v.end()-1,2,10);
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}