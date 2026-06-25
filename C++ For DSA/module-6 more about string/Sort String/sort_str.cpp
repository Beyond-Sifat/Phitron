#include <bits/stdc++.h>
using namespace std;
int main()
{

    //===========================MANUAL===============================
    // char str[100001];
    // while (cin.getline(str, 100001)) //EOF
    // {
    //     int len = strlen(str);
    //     sort(str, str + len);

    //     for (int i = 0; i < len; i++)
    //     {
    //         if (str[i] != ' ')
    //         {
    //             cout << str[i];
    //         }
    //     }
    //     cout << endl;
    // }

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}