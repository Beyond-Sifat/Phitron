#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[10001];
        scanf("%10000s", str);

        int digit = 0;
        int lower = 0;
        int upper = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                upper++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                lower++;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", upper, lower, digit);
    }

    return 0;
}