#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> l;      // declare a list
    list<int> l2(10); // declare a list with size
    cout << l.size() << " " << l2.size() << endl;
    list<int> l3(10, 3);
    for (int v : l3)
    {
        cout << v << endl;
    }

    list<int> l4 = {1, 2, 3, 4, 5};
    list<int> l5(l4);
    int a[] = {10, 20, 30};
    list<int> l6(a, a + 3);
    vector<int> v={100,200,300};
    list<int> l6(v.begin(), v.end());

    return 0;
}