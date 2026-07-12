
// *O(1) Complexity:
// We consider constant space complexity when the program doesn't contain any loop, recursive function, or call to any other functions.
// *O(n) Complexity:
// We consider the linear space complexity when the program contains any loops.

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n; //o(1)
    cin >> n; //o(1)
    for (int i = 1; i <= n; i++) //o(n) -> contain loop
    {
        cout << i << " ";
    }
    return 0;
}