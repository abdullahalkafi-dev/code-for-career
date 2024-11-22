#include <iostream>
using namespace std;

int main()
{

    char s[100];
    int a;
    cin >> a;
    cin.ignore();
    cin.getline(s, 100);

    // cin >> s;

    cout << s << " " << a << endl;

    string str;

    cin >> str;
    cout << str << endl;

    return 0;
}
