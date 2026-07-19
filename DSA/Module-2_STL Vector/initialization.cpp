#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> v;       //type-1
    // cout<<v.size()<<endl;

    // vector<int>v(5);     //type-2
    //  cout<<v.size()<<endl;

    // vector<int>v(5,7);  //type-3
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    // vector<int>v(5,7);  //type-4 - copy another vector
    // vector<int>v2(v);
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }

    int a[5] = {1, 2, 3, 4, 5}; // type-5 - copy an array
    vector<int> v(a, a + 5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

// vector<int>v={1, 2, 3, 4, 5}; //type-6

    return 0;
}