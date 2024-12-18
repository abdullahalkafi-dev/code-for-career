#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    char section;
    int roll;
    Student(char y, int z)
    {

        section = y;
        roll = z;
    }
};

int main()
{

    Student a('A', 40);

    cout << a.section << " " << a.roll << endl;

    return 0;
}