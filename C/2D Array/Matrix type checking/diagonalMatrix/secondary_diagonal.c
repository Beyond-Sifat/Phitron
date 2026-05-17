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
                if (i + j==r-1)
                {
                    // we are now at secondary_diagonal
                }
                else
                {
                    // outside diagonal
                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("This is not a secondary diagonal matrix\n");
                        break;
                    }
                }
            }
            if (is_diagonal == false)
            {
                break;
            }
        }
        if (is_diagonal == true)
        {
            printf("this is a secondary diagonal matrix");
        }
    }
    else
    {
        printf("Not a square matrix");
    }
    return 0;
}