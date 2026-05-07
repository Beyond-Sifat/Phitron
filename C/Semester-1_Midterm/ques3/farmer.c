#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {

        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int day = (M1 * D) / (M1 + M2);
        int fewer_day = D - day;

        printf("%d\n", fewer_day);
    }
    return 0;
}