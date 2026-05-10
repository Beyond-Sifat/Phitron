#include <stdio.h>
int main()
{

    int a[5] = {1, 2, 3, 4, 5};
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
    printf("%p\n", &a[3]);
    printf("%p\n", &a[4]);

    printf("%d\n", *a); // 0th index

    *a = 100;                 // dereferencing -> change value of 0th index
    printf("%d\n", *a);       // 0th index
    printf("%d\n", *(a + 1)); // 1th index
    *(a + 1) = 200;           // dereferencing -> change value of 1th index
    printf("%d\n", *(a + 1)); // 1th index

    return 0;
}