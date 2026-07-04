#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        string s,x;
        cin>>s>>x;

        int position = s.find(x);

        while(position>=0){
            s.replace(position, x.size(), "#");
            position= s.find(x);
        }
        cout<<s<<endl;
    }
    return 0;
}