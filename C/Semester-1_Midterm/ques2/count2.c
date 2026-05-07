#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100001];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    int count1 = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u')
        {
            count1++;
        }
    }

    printf("%d", count1);

    return 0;
}