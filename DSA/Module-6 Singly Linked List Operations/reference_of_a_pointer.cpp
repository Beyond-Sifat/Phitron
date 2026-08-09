// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *p)
// {
//      cout << "In fun: " << *p << endl;
//     *p=100;      //change the value by dereferencing
// }
// int main()
// {

//     int x = 10;
//     int *p = &x;
//     cout << "In main: " << *p <<endl;
//     fun(p);
//     cout<<x<<endl; //*value changed to 100
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void fun(int *p)
{
    int y = 100;
    p = &y; //*change the pointer instead of change value by dereference
}
int main()
{

    int x = 10;
    int *p = &x;
    fun(p);
    cout << *p << endl; //value is still 10;
    return 0;
}