#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int marks;

    Student(int id, string name, char section, int marks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->marks = marks;
    }
};
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int id, marks;
        string name;
        char section;

        cin >> id >> name >> section >> marks;
        Student s1(id, name, section, marks);

        cin >> id >> name >> section >> marks;
        Student s2(id, name, section, marks);

        cin >> id >> name >> section >> marks;
        Student s3(id, name, section, marks);

        Student best = s1;
        if (s2.marks > best.marks ||
            (s2.marks == best.marks && s2.id < best.id))
        {
            best = s2;
        }

        if (s3.marks > best.marks ||
            (s3.marks == best.marks && s3.id < best.id))
        {
            best = s3;
        }

        cout << best.id << " "
             << best.name << " "
             << best.section << " "
             << best.marks << endl;
    }

    return 0;
}