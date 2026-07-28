#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, q, i;
    cin >> n >> q;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        for (int z:a)
        {
            if (z == x)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}