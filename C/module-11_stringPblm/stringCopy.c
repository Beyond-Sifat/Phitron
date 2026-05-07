#include <stdio.h>
#include <string.h>
int main()
{

    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int length = strlen(b);
    for (int i = 0; i <= length; i++)
    {
        a[i] = b[i];
    }
    printf("%s %s\n", a, b);



    // using build in method
    char c[101], d[101];
    scanf("%s %s", &c, &d);
    strcpy(c, d);
    printf("%s %s", a, b);

    return 0;
}