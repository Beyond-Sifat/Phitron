int sumPositive=0;
    int sumNegative=0;
    for(int i=0; i<n;i++){
        if(arr[i]%2==0){
            sumPositive = sumPositive+arr[i];
        }
    }
    printf("%d",sumPositive);
    return 