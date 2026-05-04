#include <stdio.h>

int main()
{
    char str[10001];
    int count[26] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
        count[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}


// #include<stdio.h>
// int main()
// {
//     char str[10001];
//     scanf("%s", str);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         str[i] = tolower(str[i]);
//     }

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         printf("%c-\n", str[i]);
//     }
//     return 0;
// }

