#include <stdio.h>
int main()
{

    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    int *ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr); // access the value of ptr variable

    *ptr = 200;
    // dereferencing
    printf("%d\n", x);

    return 0;
}