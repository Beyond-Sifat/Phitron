#include <stdio.h>

void sum(int a, int b, int c)
{

    int result = a + b + c;
            // "return" in function (function call). Not execute next line
    // return;
    printf("%d", result);
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sum(a, b, c);
    return 0;
}