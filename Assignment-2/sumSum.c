#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int sumPositive=0;
    int sumNegative=0;
    for(int i=0; i<n;i++){
        if(arr[i]>0){
            sumPositive = sumPositive+arr[i];
        }else{
            sumNegative=sumNegative+arr[i];
        }
    }
    printf("%d %d",sumPositive,sumNegative);
    return 0;
}