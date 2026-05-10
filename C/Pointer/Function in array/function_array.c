#include <stdio.h>

void fun(int a[])
{
    a[1] = 200;
}
int main()
{

    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    fun(a);
    for (int i = 0; i < 5; i++)
    {

        printf("%d ", a[i]);
    }

    return 0;
}