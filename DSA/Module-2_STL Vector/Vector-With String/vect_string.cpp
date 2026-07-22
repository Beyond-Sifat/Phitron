#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int n;
    // cin >> n;

    // vector<string> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // for (string s : v)
    // {
    //     cout << s << endl;
    // }

    int n;
    cin >> n;
    cin.ignore();
    vector<string> v2(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin,v2[i]);
    }
    for (string s2 : v2)
    {
        cout << s2 << endl;
    }
    return 0;
}