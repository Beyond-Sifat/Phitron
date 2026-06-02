#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double marks;
    Student(int r, int c, double m)
    {
        roll = r;
        cls = c;
        marks = m;
    }
};
int main()
{
    Student s1(1, 10, 85.5);
    Student s2(2, 10, 90.0);
    cout<<s1.roll<<" "<<s1.cls<<" "<<s1.marks<<endl;
    cout<<s2.roll<<" "<<s2.cls<<" "<<s2.marks<<endl;


    return 0;
}