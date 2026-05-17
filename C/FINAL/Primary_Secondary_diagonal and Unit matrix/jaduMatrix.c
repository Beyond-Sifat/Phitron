#include <stdio.h>
#include <stdbool.h>

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

    bool is_diagonal = true;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (a[i][j] != 1)
                        is_diagonal = false;
                }
                else if (i + j == r - 1)
                {
                    if (a[i][j] != 1)
                        is_diagonal = false;
                }
                else
                {
                    // outside diagonal
                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                        // printf("This is not a primary diagonal matrix");
                        break;
                    }
                }
            }
            if (is_diagonal == false)
            {
                break;
            }
        }
        if (is_diagonal)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
