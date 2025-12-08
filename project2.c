#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int opt;
    float num1, num2, res;
    int n, i;
    long long fact;
    float val;

    // Run the calculator loop
    while (1) {
        printf("\n");
        printf("------- Scientific Calculator -------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (num ^ pow)\n");
        printf("6. Square Root\n");
        printf("7. Log (natural)\n");
        printf("8. Log10 (base 10)\n");
        printf("9. Sin\n");
        printf("10. Cos\n");
        printf("11. Tan\n");
        printf("12. Factorial\n");
        printf("13. Exit\n");
        printf("-------------------------------------\n");
        printf("Select an option: ");
        scanf("%d", &opt);

        if (opt == 13) {
            printf("Exiting... Bye!\n");
            break;
        }

        switch (opt) {
            case 1:
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                res = num1 + num2;
                printf("Answer: %.2f\n", res);
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                res = num1 - num2;
                printf("Answer: %.2f\n", res);
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                res = num1 * num2;
                printf("Answer: %.2f\n", res);
                break;

            case 4:
                printf("Enter numerator: ");
                scanf("%f", &num1);
                printf("Enter denominator: ");
                scanf("%f", &num2);
                if (num2 == 0) {
                    printf("Math Error: Cannot divide by zero.\n");
                } else {
                    res = num1 / num2;
                    printf("Answer: %.2f\n", res);
                }
                break;

            case 5:
                printf("Enter base: ");
                scanf("%f", &num1);
                printf("Enter power: ");
                scanf("%f", &num2);
                res = pow(num1, num2);
                printf("Answer: %.2f\n", res);
                break;

            case 6:
                printf("Enter number: ");
                scanf("%f", &num1);
                if (num1 < 0) {
                    printf("Invalid input for square root.\n");
                } else {
                    res = sqrt(num1);
                    printf("Answer: %.2f\n", res);
                }
                break;

            case 7:
                printf("Enter value: ");
                scanf("%f", &num1);
                if(num1 > 0)
                    printf("Result: %.4f\n", log(num1));
                else
                    printf("Error: Log requires positive number.\n");
                break;

            case 8:
                printf("Enter value: ");
                scanf("%f", &num1);
                if(num1 > 0)
                    printf("Result: %.4f\n", log10(num1));
                else
                    printf("Error: Log requires positive number.\n");
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%f", &num1);
                // convert to radians manually: deg * 3.14 / 180
                val = num1 * 3.14159 / 180;
                printf("Sin(%.1f) = %.4f\n", num1, sin(val));
                break;

            case 10:
                printf("Enter angle in degrees: ");
                scanf("%f", &num1);
                val = num1 * 3.14159 / 180;
                printf("Cos(%.1f) = %.4f\n", num1, cos(val));
                break;

            case 11:
                printf("Enter angle in degrees: ");
                scanf("%f", &num1);
                val = num1 * 3.14159 / 180;
                printf("Tan(%.1f) = %.4f\n", num1, tan(val));
                break;

            case 12:
                printf("Enter an integer: ");
                scanf("%d", &n);
                if (n < 0) {
                    printf("Factorial of negative number doesn't exist.\n");
                } else {
                    fact = 1;
                    for (i = 1; i <= n; i++) {
                        fact = fact * i;
                    }
                    printf("Factorial of %d is %lld\n", n, fact);
                }
                break;

            default:
                printf("Wrong choice! Please choose 1-13.\n");
        }
    }

    return 0;
}