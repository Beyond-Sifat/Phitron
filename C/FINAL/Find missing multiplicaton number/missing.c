#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, a,b,c;
        scanf("%d %d %d %d", &m, &a, &b, &c);

        int multiply =a*b*c;
        if (m == 0)
        {
            printf("0\n");
        }else if(m%multiply==0){
            printf("%d\n",m/multiply);
        }else{
            printf("-1\n");
        }
    }
    return 0;
}