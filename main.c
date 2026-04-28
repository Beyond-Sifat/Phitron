/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    if(N>=21 && N<=1000){
        for(int i = 1; i<=N;i++){
            if(i%3==0 && i%7==0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    if(N>1000){
            printf("I will buy Punjabi\n");
        if(N>=1500){
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }else{
        printf("Bad luck!");
    }
    return 0;
}
