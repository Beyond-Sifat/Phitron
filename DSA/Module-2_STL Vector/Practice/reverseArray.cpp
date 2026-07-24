// F. Reversing
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N and an array A of N numbers. Print the array in a reversed order.

// Note:
// **Don't use built-in-functions.

// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers (0 ≤ Ai ≤ 109).

// Output
// Print the array in a reversed order.

// Examples
// **Input
// 4
// 5 1 3 2
// **Output
// 2 3 1 5 


#include <bits/stdc++.h>
using namespace std;

// vector<int> reverse( vector<int> &a,int n){
//     vector
// }
int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    for(int x:a){
        cout<<x<<" ";
    }
    return 0;
}