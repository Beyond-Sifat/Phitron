// L. New Array
// time limit per test1 second
// memory limit per test256 megabytes
// *Given two arrays A and B of size N. Print a new array C that holds the concatenation of array B followed by array A

// **Note: Solve this problem using function.

// Input
// First line will contain a number N
//  (1≤N≤103)
// .

// Second line will contain N
//  numbers (1≤Ai≤105)
//  array A
//  elements.

// Third line will contain N
//  numbers (1≤Bi≤105)
//  array B
//  elements.

// Output
// Print array C
//  elements separated by space.

// Example
// **Input
// 2
// 1 2
// 3 4
// **Output
// 3 4 1 2 

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