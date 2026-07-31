//****https://www.codechef.com/problems/EVENSUM1******

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        for(int x:a){
            sum+=x;
        }
        int flag=0;
        for(int i=0;i<n;i++){
            int remaining_sum=sum-a[i];
            if(remaining_sum%2==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}