#include <bits/stdc++.h>
using namespace std;
int main()
{

    // string s ="Hello";

    //-----1---------
    // string s("Hello");

    //-----2---------
    // string(const char* str, size_t n)
    string s2("hello", 4);
    cout << s2<<endl;; // hell

    //-----3---------
    // string(const string& str, size_t pos)
    string s3 = "Hello world";
    string t(s3, 4);
    cout << t<<endl; // o world

    string s4(5,'S');
    cout<<s4<<endl; //SSSSS
    return 0;
}