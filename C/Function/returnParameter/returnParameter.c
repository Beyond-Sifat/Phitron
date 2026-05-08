#include<stdio.h>
int sum(int num1,int num2, int num3);
int sum(int num1,int num2, int num3){
    int result = num1+num2+num3;
    return result;
}
int main()
{

    int ans = sum(10,20,30);
    printf("%d",ans);
    return 0;
}