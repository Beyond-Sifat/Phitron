#include<stdio.h>

int sum(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int result=a+b+c;
    return result;
}
int main()
{
    int ans = sum();
    printf("%d", ans);

    return 0;
}