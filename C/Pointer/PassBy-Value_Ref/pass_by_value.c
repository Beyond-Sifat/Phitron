/* When you pass a variable by value, a copy of the variable is sent to the function.
    -Changes inside the function do NOT affect the original variable.
    -Each function works with its own copy.
*/
#include <stdio.h>

void change(int x)
{
    x = 50; // changes only the copy
}

int main()
{
    int a = 10;
    change(a);
    printf("%d", a); // Output: 10 (unchanged)
    return 0;
}