#include<stdio.h>
int main()
{

    int a=10;
    int b=20;
    int temp = a;
    a=b;
    b=temp;
    printf("A = %d B = %d", a,b);
    return 0;
}