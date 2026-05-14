#include <stdio.h>
int main()
{

    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    if (r == 1)
    {
        printf("Its a row matrix");
    }
    else
    {
        printf("Its not a row matrix");
    }

    // if (c == 1)
    // {
    //     printf("Its a col matrix");
    // }
    // else
    // {
    //     printf("Its not a col matrix");
    // }
}