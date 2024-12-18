#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    // Student(string name, int roll)
    // {
    //     this->name = name;
    //     this->roll = roll;
    // };
    void hello(string name, int roll,string userName="null ")
    {
        cout << "hello from "<< name <<" by "<<userName<<endl;
    }
};

int main()
{
    Student sakib;
    Student rakib;
    rakib.hello("Rakib Ahmed", 24,"Abdullah");
    sakib.hello("Sakib Ahmed", 24,"Abdullah");

    return 0;
}