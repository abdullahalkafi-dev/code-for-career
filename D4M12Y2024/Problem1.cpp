// Problem Statement

// You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

// Input Format

// First line will contain T, the number of test cases.
// Next T lines will contain a line with S and X.
// Constraints

// 1 <= T <= 1000
// 1 <= |S|, |X| <= 1000
// |X| <= |S|
// Output Format

// For each test cases output the modified string S.
// Sample Input 0

// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
// Sample Output 0

// rahimisa#guy
// can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {

//         string s1;
//         string s2;
//         cin >> s1 >>s2;

//        auto pos = s1.find(s2);
//         if(pos<s1.length()){

//             s1.replace(pos,s2.length(),"#");
//         }

//         cout<<s1<<endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
     
auto pos = s1.find(s2);

       while(pos>= 0 && pos<s1.length()) {
s1.replace(pos, s2.length(), "#");
pos =s1.find(s2,pos+1);
       }
       

        cout << s1 << endl;
    }

    return 0;
}