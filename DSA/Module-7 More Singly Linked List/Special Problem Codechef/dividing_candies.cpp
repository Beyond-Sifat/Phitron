// *https://www.codechef.com/problems/DIVKIDS


#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> divisible;
        for(int i=0;i<n;i++){
            if(arr[i]%x==0){
                divisible.push_back(arr[i]);
            }
        }
        int largest=0;
        for(int i=0;i<divisible.size();i++){
            largest=max(largest, divisible[i]);
        }
        cout<<largest<<endl;
    }
    return 0;
}