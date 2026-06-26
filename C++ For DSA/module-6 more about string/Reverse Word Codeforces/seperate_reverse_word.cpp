#include <bits/stdc++.h>
using namespace std;
int main()
{

    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;

    //To handle the last space.
    //*********print the first word outside loop and then add a space before print every word******
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout <<" "<<word;
    }

    // cout<<sentence;

    return 0;
}