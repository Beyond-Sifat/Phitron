#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> v2;
    // //=============ASSIGN==============
    // v2 = v;
    // // for(int i=0;i<v2.size();i++){
    // //     cout<<v2[i]<<" ";
    // // }
    // for (int x : v2) // range based for-loop
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // cout << v.size() << endl;

    // //============push_back() & pop_back()===============
    // v.push_back(10);
    // cout << v.size() << endl;
    // v.pop_back();
    // cout << v.size() << endl;

    // //============insert(position,value)===============

    // vector<int> v3 = {1, 2, 3};
    // vector<int> v4 = {100, 200, 300};
    // // v3.insert(v3.begin()+2,100);
    // v3.insert(v3.begin() + 2, v4.begin(), v4.end());
    // for (int y : v3)
    // {
    //     cout << y << " ";
    // }
    // cout << endl;
    // //============Erase(position,value)===============
    // vector<int> v5 = {5, 6, 7, 800, 900, 1000};
    // // vector<int>v6={500,600,700};
    // v5.erase(v5.begin() + 1, v5.begin() + 5);
    // for (int z : v5)
    // {
    //     cout << z << " ";
    // }

    //============Replace(begin,end,value,value)============
    vector<int> v6 = {5, 2, 7, 2, 90, 2, 65, 2};
    // replace(v6.begin(), v6.end(), 2, 1000);
    // for (int x1 : v6)
    // {
    //     cout << x1 << " ";
    // }
    cout << endl;
    replace(v6.begin(), v6.end() - 1, 2, 1000);
    for (int x1 : v6)
    {
        cout << x1 << " ";
    }

    cout << endl;
    //============Find(begin,end,value)============

    vector<int> v7 = {50, 23, 70, 26, 30, 23, 65, 100};

    vector<int>::iterator it = find(v7.begin(), v7.end(), 200);
    //    OR USE
    // auto it = find(v7.begin(), v7.end(), 100);
    if (it == v7.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}