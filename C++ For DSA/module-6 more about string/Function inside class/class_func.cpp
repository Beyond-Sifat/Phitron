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
        cout<<"Hello from "<<name<<endl;
    }
};
int main()
{
    Student sakib("Sakib Ahmed",20);
    sakib.hello();
    Student rakib("Rakib Hasan",15);
    rakib.hello();


    
    cout<<sakib.name<<endl;
    cout<<sakib.roll<<endl;
    // cout<<sakib.hello<<endl;

    return 0;
}