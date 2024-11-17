#include <iostream>
using namespace std;

// we can use type cast by using ()with type like (int) before when print the variable

int main()
{
    int x;
    char c;
    double d;
    int y = 66;
    cin >> x >> c >> d;

    cout << x << " " << c << " " << d << endl;
    cout << x << " " << (int)c << " " << d << " " << (char)y << endl;
    int ascii = c;
    cout << ascii;
    return 0;
}
