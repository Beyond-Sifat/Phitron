#include <bits/stdc++.h>
using namespace std;

vector<int> concatenation(vector<int> &a, vector<int> &b, int n)
{
    vector<int> newArr;
    for (int i = 0; i < n; i++)
    {
        newArr.push_back(b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        newArr.push_back(a[i]);
    }
    return newArr;
}
int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> c = concatenation(a, b, n);
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << "\n";

    return 0;
}