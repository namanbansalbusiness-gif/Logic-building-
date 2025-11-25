#include <stdio.h>

int main() {
    int n, first, last, temp, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;         
    last = n % 10;    


    while (n >= 10) {
        n = n / 10;
        pow = pow * 10;
    }
    first = n;      

    
    int swapped = (temp % pow) / 10;      
    swapped = last * pow + swapped * 10 + first;

    printf("Number after swapping : %d\n", swapped);

    return 0;
}