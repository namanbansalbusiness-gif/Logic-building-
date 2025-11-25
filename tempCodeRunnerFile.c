#include<stdio.h>
int main(){
    int x,i,factorial=1;

    printf("enter a no. : ");
    scanf("%d",&x);

    for (i=1;i<=x;i++){
        factorial *= i;
    }
    printf("factorial of no. is %d",factorial);
    return 0;
}