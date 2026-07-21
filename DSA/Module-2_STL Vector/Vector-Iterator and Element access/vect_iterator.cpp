#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {5, 6, 7, 800, 900, 1000};
    for(vector<int>::iterator it= v.begin();it<v.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}