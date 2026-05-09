/*C does not support true pass-by-reference like some languages, but you can achieve it using pointers.
    -You pass the address of the variable.
    -The function can modify the original variable.
*/

#include <stdio.h>

void change(int *x) {
    *x = 50;  // modifies original value
}

int main() {
    int a = 10;
    change(&a);
    printf("%d", a);  // Output: 50 (changed)
    return 0;
}