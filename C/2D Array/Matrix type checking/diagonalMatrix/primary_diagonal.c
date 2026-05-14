#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    if (r != c)
    {
        printf("Not a square matrix");
        return 0;
    }

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool is_diagonal = true;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j && a[i][j] != 0)
            {
                is_diagonal = false;
                break;
            }
        }
        if (!is_diagonal)
            break;
    }

    if (is_diagonal)
        printf("This is a primary diagonal matrix");
    else
        printf("This is not a primary diagonal matrix");

    return 0;
}




// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {

//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d ", &a[i][j]);
//         }
//     }


//     bool is_diagonal = true;
//     if (r == c)
//     {
//         //
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 if (i == j)
//                 {
//                     // inside diagonal
//                     // printf("%d ", a[i][j]);
//                 }
//                 else
//                 {
//                     // outside diagonal
//                     is_diagonal = false;
//                     if (a[i][j] != 0)
//                     {
//                         printf("This is not a primary diagonal matrix");
//                     }
//                 }
//             }
//         }
//         if (is_diagonal == true)
//         {
//             printf("this is a primary diagonal matrix");
//         }
//     }
//     else
//     {
//         printf("Not a square matrix");
//     }
//     return 0;
// }
