#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        (*this).roll = roll;
    }
    void hello(){
        cout<<"Hello"<<endl;
    }
};
int main()
{
    Student sakib("Sakib Ahmed",20);
    cout<<sakib.name<<endl;
    cout<<sakib.roll<<endl;
    // cout<<sakib.hello<<endl;

    sakib.hello();
    return 0;
}