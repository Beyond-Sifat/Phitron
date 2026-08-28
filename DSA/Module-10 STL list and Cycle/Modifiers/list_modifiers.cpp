#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 20, 50, 20, 40, 20,60};
    list<int> l2 = {10, 20, 30};
    // l2.assign(l.begin(),l.end());
    //========OR=======
    // l2 = l;
    // for (int val : l2)
    // {
    //     cout << val << endl;
    // }

    // l.push_back(100);
    // l.push_front(200);
    // l.pop_back();
    // l.pop_back();
    // l.pop_front();

    // cout << *next(l.begin(), 2) << endl;

    // l.insert(next(l.begin(), 2), 100);
    // l.insert(next(l.begin(), 2), l2.begin(),l2.end());

    
    l.erase(next(l.begin(), 2));                     // single value delete
    l.erase(next(l.begin(), 2), next(l.begin(), 5)); // delete a portion

    replace(l.begin(), l.end(), 20, 100);
    auto it = find(l.begin(), l.end(), 60);
    if (it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    for (int val2 : l)
    {
        cout << val2 << endl;
    }
    return 0;
}