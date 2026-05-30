#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int age;
    double marks;
};
int main()
{
    Student s1, s2, s3;
    s1.age = 20;
    s1.marks = 85.5;
    char temp[100] = "Altaf Uddin Sifat";
    strcpy(s1.name, temp);
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;

    //-----------------------------------------------------------------
    //--------------Student 2-------------------
    //-----------------------------------------------------------------
    cin.getline(s2.name, 100);
    cin >> s2.age >> s2.marks;

    cin.ignore(); // To ignore the newline character left in the input buffer
    //getchar(); // To consume the newline character left in the input buffer

    //-----------------------------------------------------------------
    //--------------Student 3-------------------
    //-----------------------------------------------------------------
    cin.getline(s3.name, 100); // Read a character string, including spaces
    cin >> s3.age >> s3.marks;
    cout << s2.name << " " << s2.age << " " << s2.marks << endl;
    cout << s3.name << " " << s3.age << " " << s3.marks << endl;

    return 0;
}