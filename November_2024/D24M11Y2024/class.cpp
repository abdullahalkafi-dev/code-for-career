#include <bits/stdc++.h>
class Student
{
public:
    char name[100];
    int roll;
    char section;
    double gpa;
};

using namespace std;

int main()
{

    Student a,b;
    cin.getline(a.name,100);
   

    cin>>a.section>>a.roll>>a.gpa;
    cin.ignore();
     cin.getline(b.name,100);
    cin>>b.section>>b.roll>>b.gpa;

    cout<<a.name<<" "<<a.section<<a.roll<<a.gpa<<endl;
    cout<<b.name<<" "<<b.section<<b.roll<<b.gpa<<endl;
    return 0;
}