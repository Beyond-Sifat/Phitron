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
    int totalValue = r * c;
    int zeroCount = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                zeroCount++;
            }
        }
    }
    if (totalValue == zeroCount)
    {
        printf("Its a Zero matrix");
    }
    else
    {
        printf("Its not a Zero matrix");
    }
}