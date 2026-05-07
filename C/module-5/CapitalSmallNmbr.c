#include<stdio.h>
int main()
{

    char X;
    scanf("%c", &X);
    if(X>='A' && X<='Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(X>='a' && X<='z')
    {
        printf("ALPHA\nIS SMALL\n");
    }
    else
    {
        printf("IS DIGIT\n");
    }

    return 0;
}