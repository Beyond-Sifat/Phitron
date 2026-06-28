#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    Cricketer *alex = new Cricketer("india", 100);
    Cricketer *jon = new Cricketer("bangladesh", 30);

    // cout<<alex->country<<" "<<alex->jersey<<endl;
    //*copy->wrong way */
    // jon = alex;


    //****instead of copy like that, copy using "->" and "variable"*/
    // jon->country=alex->country;
    // jon->jersey=alex->jersey;

    //**for not to manually copy every variable. Dereference*/
    *jon=*alex;
    delete alex;
    cout << jon->country << " " << jon->jersey << endl;
    return 0;
}