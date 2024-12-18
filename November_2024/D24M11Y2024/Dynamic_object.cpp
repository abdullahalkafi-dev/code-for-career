#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    char section;
    int cls;
    Student(int roll, char section, int cls)
    {

        this->roll = roll;
        this->section = section;
        this->cls = cls;
    }
};

Student *fun()
{

    Student *karim = new Student(40, 'A', 9);
    return karim;
}
Student* fun1()
{

   Student karim(55, 'b', 10);
    Student*p= &karim;
    return p;
}

int main()
{

    Student *obj = fun();
    Student *obj1=fun1();
    cout << obj->roll << " " << obj->section << " " << obj->cls << endl;
    cout << obj1->roll << " " << obj1->section << " " << obj1->cls << endl;

    return 0;
}