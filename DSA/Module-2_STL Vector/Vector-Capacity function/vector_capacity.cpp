#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3};

    v.push_back(7);
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    cout << v[2] << endl;
    cout << v.empty() << endl; // return true(1) or false(0)

    vector<int> v2;
    cout << v2.empty() << endl;

    // resize function and capacity

    vector<int> v3;
     cout << v3.capacity() << endl;
    v3.push_back(10);
    cout << v3.size() << endl;
    v3.resize(2);
    cout << v3.size() << endl;
    cout << v3.capacity() << endl;

    return 0;
}