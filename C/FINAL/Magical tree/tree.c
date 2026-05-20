#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        int star = 1;
        int row=(n / 2) + 6;
        int space = row - 1;
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= star; j++)
            {
                printf("*");
            }
            printf("\n");
            star+=2;
            space--;
        }

        int trunk_space = row - (n / 2) - 1;
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= trunk_space; j++)
            {
                printf(" ");
            }
            
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
            
            printf("\n");
        }
    }
    return 0;
}


// n=n;
// // printf("%d\n",n);
// for (int i = 1; i <= 5; i++){
//     for(int j=1;j<=n;j++){
//         printf("*");
//     }
//     printf("\n");
// }