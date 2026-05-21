#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << min(x, y) << endl;
    cout << max(x, y) << endl;

    cout << min({5, 30, 440, 500, 34, 57}) << endl;
    cout << max({27, 456, 4, 454, 34, 566, 768, 343, 3}) << endl;

    //-------------------------------
    //------------SWAP---------------

    int temp = x;
    x = y;
    y = temp;
    cout << x << " " << y << endl;

    //-------------------------------
    //----------SWAP FUNCTION--------
    swap(x, y);
    cout << x << " " << y;

    return 0;
}