#include <iostream>
using namespace std;
int main()
{

    int x;
    char a;
    cin >> x >> a;
    cout << x << " " << a << endl;

    cout <<(int)a <<endl;  //typecasting

    int b;
    while(cin >> b){  //EOF
        cout << b << endl;
    }
    return 0;
}