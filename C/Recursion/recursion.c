#include <stdio.h>
void hello(){  //recursive function
    printf("Hello\n");
    hello(); //call itself
}
int main()
{
    printf("Hi\n");
    hello();
    return 0;
}