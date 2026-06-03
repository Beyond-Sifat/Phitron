#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double marks;

    Student(int roll, int cls, double marks)
    {
        this->roll = roll;
        this->cls = cls;
        this->marks = marks;
    }
};

Student *fun()
{
    Student *rahim = new Student(1, 10, 85.5);
    return rahim;
}
int main()
{

    Student s1(1, 10, 85.5);
    Student *s2 = fun();
    Student *john = new Student(3, 10, 90.0);
    cout << s1.roll << " " << s1.cls << " " << s1.marks << endl;
    cout << s2->roll << " " << s2->cls << " " << s2->marks << endl;
    cout << john->roll << " " << john->cls << " " << john->marks << endl;
    return 0;
}