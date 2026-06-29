#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    double gpa;
};
int main()
{

    int n;
    cin >> n;
    cin.ignore();
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].gpa;
        // cin.ignore();
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i].name << " " << arr[i].roll << " " << arr[i].gpa << endl;
    }
    return 0;
}