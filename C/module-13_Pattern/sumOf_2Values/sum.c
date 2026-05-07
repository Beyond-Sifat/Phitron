#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    int flag=100; //any value

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                flag=1;
                printf("YES");
            }
        }
    }
    if(flag==100){
        printf("NO");
    }
    return 0;
}