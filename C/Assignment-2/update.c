// #include <stdio.h>
// int main()
// {

//     int n, x, v;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     scanf("%d %d", &x, &v);

//     // Step 1: replace
//     arr[x] = v;

//     // Step 2: reverse print
//     for (int i = n - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


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