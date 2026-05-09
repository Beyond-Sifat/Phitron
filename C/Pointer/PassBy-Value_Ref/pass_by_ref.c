/*C does not support true pass-by-reference like some languages, but you can achieve it using pointers.
    -You pass the address of the variable.
    -The function can modify the original variable.
*/

#include <stdio.h>

void change(int *x)
{
    *x = 50;
}

int main()
{
    int x = 10;
    printf("%d\n", x); // 10
    change(&x);
    printf("%d\n", x); // 50 - change the value by passing address and dereference the value
    return 0;
}


// #include <stdio.h>

// void change(int *x) {
//     *x = 50;  // modifies original value
// }

// int main() {
//     int a = 10;
//     change(&a);
//     printf("%d", a);  // Output: 50 (changed)
//     return 0;
// }
