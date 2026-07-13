// Logarithmic time complexity is denoted as O(log n). It is a measure of how the runtime of an algorithm scales as the input size increases.

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int  number_of_operations = 0;
    for (int i = 1; i <= n; i*=2)
    {
        cout << i << " ";
        number_of_operations++;
    }
    cout<<endl<<number_of_operations;
    return 0;
}