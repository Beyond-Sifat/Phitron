#include <bits/stdc++.h>
using namespace std;
int main()
{

    // char s[100];
    // cin.getline(s,100);
    // for(int i=0;s[i]!='\0';i++){
    //     if(s[i]==' '){
    //         cout<<"\n";
    //     }else{
    //         cout<<s[i];
    //     }
    // }

    // string s;
    // getline(cin,s);
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     if (s[i] == ' ')
    //     {
    //         cout << "\n";
    //     }
    //     else
    //     {
    //         cout << s[i];
    //     }
    // }

    string sentence;
    getline(cin, sentence);
    cout << sentence<<endl;
    cout <<endl;

    stringstream ss(sentence);

    string word;
    //"Take the next word from the stream and put it into the variable word."
    // ss >> word;       ---------------------------
    int count=0;
    while (ss >> word)
    {
        cout << word << endl;
        count++;
    }
    cout<<count;

    return 0;
}