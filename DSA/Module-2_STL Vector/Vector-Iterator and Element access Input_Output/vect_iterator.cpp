#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {5, 6, 7, 800, 900, 1000};
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
cout<<endl;
    int n;
    cin >> n;
    // vector<int> v1(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v1[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v1[i] << " ";
    // }


    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}