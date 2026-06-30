#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        // cin.ignore();
    }

    int minValue = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        minValue = min(a[i].marks, minValue);
        // cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    cout << minValue << endl;

    Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if (a[i].marks < mn.marks)
        {
            mn = a[i];
        }
    }

    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    return 0;
}