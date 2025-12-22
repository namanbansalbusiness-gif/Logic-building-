// Program 1: WAP to print Hello World
// #include <stdio.h>
// 
// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// Program 2: WAP to add two integers
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     printf("Sum = %d\n", a + b);
//     return 0;
// }


// Program 3: WAP to check whether a number is even or odd
// #include <stdio.h>
// 
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("%d is even\n", n);
//     else
//         printf("%d is odd\n", n);
//     return 0;
// }


// Program 4: WAP to print the first and last digit of a number
// #include <stdio.h>
// 
// int main() {
//     int i, firstDigit, lastDigit;
// 
//     printf("Enter a number: ");
//     scanf("%d", &i);
// 
//     lastDigit = i % 10;
// 
//     firstDigit = i;
//     while (firstDigit >= 10) {
//         firstDigit = firstDigit / 10;
//     }
// 
//     printf("First digit: %d\n", firstDigit);
//     printf("Last digit: %d\n", lastDigit);
// 
//     return 0;
// }


// Program 5: WAP to check whether a given year is a leap year or not
// #include <stdio.h>
// 
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }
//     return 0;
// }


// Program 6: WAP to find GCD and LCM of two numbers using Euclid's algorithm
// #include <stdio.h>
// 
// int main() {
//     int a, b, x, y, gcd, lcm;
// 
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// 
//     x = a;
//     y = b;
// 
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
// 
//     gcd = a;
//     lcm = (x * y) / gcd;
// 
//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);
// 
//     return 0;
// }


// Program 7: WAP to input marks and print the grade
// #include <stdio.h>
// 
// int main() {
//     int marks;
// 
//     printf("Enter marks: ");
//     scanf("%d", &marks);
// 
//     if (marks > 90) {
//         printf("Grade: A\n");
//     } else if (marks > 70) {
//         printf("Grade: B\n");
//     } else if (marks >= 40) {
//         printf("Grade: C\n");
//     } else {
//         printf("Grade: F\n");
//     }
// 
//     return 0;
// }


// Program 8: WAP to calculate the sum of integers between 9 and 300 divisible by 7 but not by 63
// #include <stdio.h>
// 
// int main() {
//     int i, sum = 0;
// 
//     for (i = 9; i <= 300; i++) {
//         if (i % 7 == 0 && i % 63 != 0) {
//             sum += i;
//         }
//     }
// 
//     printf("Sum = %d\n", sum);
// 
//     return 0;
// }


// Program 9: WAP to print digits of a number in reverse order and compute the sum of digits
// #include <stdio.h>
// 
// int main() {
//     int num, sum = 0, rem;
// 
//     printf("Enter a number: ");
//     scanf("%d", &num);
// 
//     printf("Digits in reverse order: ");
//     for (; num > 0; num = num / 10) {
//         rem = num % 10;
//         printf("%d ", rem);
//         sum += rem;
//     }
// 
//     printf("\nSum of digits = %d\n", sum);
// 
//     return 0;
// }


// Program 10: WAP to compute a^2*b + a^2*b^2 + a^2*b^4
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     long long term1, term2, term3;
// 
//     printf("Enter a and b: ");
//     scanf("%d %d", &a, &b);
// 
//     long long a2 = (long long)a * a;
//     long long b2 = (long long)b * b;
//     long long b4 = b2 * b2;
// 
//     term1 = a2 * b;
//     term2 = a2 * b2;
//     term3 = a2 * b4;
// 
//     printf("a^2*b = %lld\n", term1);
//     printf("a^2*b^2 = %lld\n", term2);
//     printf("a^2*b^4 = %lld\n", term3);
//     printf("Sum = %lld\n", term1 + term2 + term3);
// 
//     return 0;
// }


// Program 11: WAP to print numbers from 2 to sqrt(n) with step 3 using a while loop
// #include <stdio.h>
// #include <math.h>
// 
// int main() {
//     int n;
//     int i = 2;
// 
//     printf("Enter n: ");
//     scanf("%d", &n);
// 
//     while (i <= sqrt(n)) {
//         printf("%d ", i);
//         i += 3;
//     }
// 
//     printf("\n");
//     return 0;
// }


// Program 12: WAP to find the factorial of a number using loop
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
// 
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
// 
//     if (n < 0) {
//         printf("Factorial not defined for negative numbers.\n");
//         return 0;
//     }
// 
//     for (i = 1; i <= n; i++) {
//         fact *= i;
//     }
// 
//     printf("Factorial of %d = %llu\n", n, fact);
//     return 0;
// }


// Program 13: WAP to print Fibonacci series up to N terms
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int a = 0, b = 1, c;
// 
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
// 
//     printf("Fibonacci series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     printf("\n");
// 
//     return 0;
// }


// Program 14: WAP to find the largest of three numbers
// #include <stdio.h>
// 
// int main() {
//     int a, b, c;
//     printf("Enter three integers: ");
//     scanf("%d %d %d", &a, &b, &c);
// 
//     if (a >= b && a >= c)
//         printf("Largest = %d\n", a);
//     else if (b >= a && b >= c)
//         printf("Largest = %d\n", b);
//     else
//         printf("Largest = %d\n", c);
// 
//     return 0;
// }


// Program 15: WAP to read an array and print the sum of its elements
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int sum = 0;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
// 
//     printf("Sum = %d\n", sum);
//     return 0;
// }


// Program 16: WAP to find the maximum element in an array
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int max;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
// 
//     max = arr[0];
//     for (i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }
// 
//     printf("Maximum = %d\n", max);
//     return 0;
// }


// Program 17: WAP to find the length of a string without using strlen()
// #include <stdio.h>
// 
// int main() {
//     char str[100];
//     int i = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     while (str[i] != '\0' && str[i] != '\n') {
//         i++;
//     }
// 
//     printf("Length = %d\n", i);
//     return 0;
// }


// Program 18: WAP to count vowels in a string
// #include <stdio.h>
// 
// int main() {
//     char str[200];
//     int i, count = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     for (i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
//             count++;
//         }
//     }
// 
//     printf("Number of vowels = %d\n", count);
//     return 0;
// }


// Program 19: WAP to define a structure for a student and print its details
// #include <stdio.h>
// 
// struct Student {
//     char name[50];
//     int roll;
//     float marks;
// };
// 
// int main() {
//     struct Student s;
// 
//     printf("Enter name: ");
//     fgets(s.name, sizeof(s.name), stdin);
// 
//     printf("Enter roll: ");
//     scanf("%d", &s.roll);
// 
//     printf("Enter marks: ");
//     scanf("%f", &s.marks);
// 
//     printf("\n--- Student Details ---\n");
//     printf("Name  : %s", s.name);
//     printf("Roll  : %d\n", s.roll);
//     printf("Marks : %.2f\n", s.marks);
// 
//     return 0;
// }


// Program 20: WAP to write a line to a file and then read it back
// #include <stdio.h>
// 
// int main() {
//     FILE *fp;
//     char line[100];
// 
//     fp = fopen("data.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing.\n");
//         return 1;
//     }
// 
//     printf("Enter a line: ");
//     fgets(line, sizeof(line), stdin);
//     fputs(line, fp);
//     fclose(fp);
// 
//     fp = fopen("data.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file for reading.\n");
//         return 1;
//     }
// 
//     printf("Contents of file:\n");
//     while (fgets(line, sizeof(line), fp)) {
//         printf("%s", line);
//     }
// 
//     fclose(fp);
//     return 0;
// }


// Program 21: WAP to print Hello World
// #include <stdio.h>
// 
// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// Program 22: WAP to add two integers
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     printf("Sum = %d\n", a + b);
//     return 0;
// }


// Program 23: WAP to check whether a number is even or odd
// #include <stdio.h>
// 
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("%d is even\n", n);
//     else
//         printf("%d is odd\n", n);
//     return 0;
// }


// Program 24: WAP to print the first and last digit of a number
// #include <stdio.h>
// 
// int main() {
//     int i, firstDigit, lastDigit;
// 
//     printf("Enter a number: ");
//     scanf("%d", &i);
// 
//     lastDigit = i % 10;
// 
//     firstDigit = i;
//     while (firstDigit >= 10) {
//         firstDigit = firstDigit / 10;
//     }
// 
//     printf("First digit: %d\n", firstDigit);
//     printf("Last digit: %d\n", lastDigit);
// 
//     return 0;
// }


// Program 25: WAP to check whether a given year is a leap year or not
// #include <stdio.h>
// 
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }
//     return 0;
// }


// Program 26: WAP to find GCD and LCM of two numbers using Euclid's algorithm
// #include <stdio.h>
// 
// int main() {
//     int a, b, x, y, gcd, lcm;
// 
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// 
//     x = a;
//     y = b;
// 
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
// 
//     gcd = a;
//     lcm = (x * y) / gcd;
// 
//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);
// 
//     return 0;
// }


// Program 27: WAP to input marks and print the grade
// #include <stdio.h>
// 
// int main() {
//     int marks;
// 
//     printf("Enter marks: ");
//     scanf("%d", &marks);
// 
//     if (marks > 90) {
//         printf("Grade: A\n");
//     } else if (marks > 70) {
//         printf("Grade: B\n");
//     } else if (marks >= 40) {
//         printf("Grade: C\n");
//     } else {
//         printf("Grade: F\n");
//     }
// 
//     return 0;
// }


// Program 28: WAP to calculate the sum of integers between 9 and 300 divisible by 7 but not by 63
// #include <stdio.h>
// 
// int main() {
//     int i, sum = 0;
// 
//     for (i = 9; i <= 300; i++) {
//         if (i % 7 == 0 && i % 63 != 0) {
//             sum += i;
//         }
//     }
// 
//     printf("Sum = %d\n", sum);
// 
//     return 0;
// }


// Program 29: WAP to print digits of a number in reverse order and compute the sum of digits
// #include <stdio.h>
// 
// int main() {
//     int num, sum = 0, rem;
// 
//     printf("Enter a number: ");
//     scanf("%d", &num);
// 
//     printf("Digits in reverse order: ");
//     for (; num > 0; num = num / 10) {
//         rem = num % 10;
//         printf("%d ", rem);
//         sum += rem;
//     }
// 
//     printf("\nSum of digits = %d\n", sum);
// 
//     return 0;
// }


// Program 30: WAP to compute a^2*b + a^2*b^2 + a^2*b^4
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     long long term1, term2, term3;
// 
//     printf("Enter a and b: ");
//     scanf("%d %d", &a, &b);
// 
//     long long a2 = (long long)a * a;
//     long long b2 = (long long)b * b;
//     long long b4 = b2 * b2;
// 
//     term1 = a2 * b;
//     term2 = a2 * b2;
//     term3 = a2 * b4;
// 
//     printf("a^2*b = %lld\n", term1);
//     printf("a^2*b^2 = %lld\n", term2);
//     printf("a^2*b^4 = %lld\n", term3);
//     printf("Sum = %lld\n", term1 + term2 + term3);
// 
//     return 0;
// }


// Program 31: WAP to print numbers from 2 to sqrt(n) with step 3 using a while loop
// #include <stdio.h>
// #include <math.h>
// 
// int main() {
//     int n;
//     int i = 2;
// 
//     printf("Enter n: ");
//     scanf("%d", &n);
// 
//     while (i <= sqrt(n)) {
//         printf("%d ", i);
//         i += 3;
//     }
// 
//     printf("\n");
//     return 0;
// }


// Program 32: WAP to find the factorial of a number using loop
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
// 
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
// 
//     if (n < 0) {
//         printf("Factorial not defined for negative numbers.\n");
//         return 0;
//     }
// 
//     for (i = 1; i <= n; i++) {
//         fact *= i;
//     }
// 
//     printf("Factorial of %d = %llu\n", n, fact);
//     return 0;
// }


// Program 33: WAP to print Fibonacci series up to N terms
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int a = 0, b = 1, c;
// 
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
// 
//     printf("Fibonacci series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     printf("\n");
// 
//     return 0;
// }


// Program 34: WAP to find the largest of three numbers
// #include <stdio.h>
// 
// int main() {
//     int a, b, c;
//     printf("Enter three integers: ");
//     scanf("%d %d %d", &a, &b, &c);
// 
//     if (a >= b && a >= c)
//         printf("Largest = %d\n", a);
//     else if (b >= a && b >= c)
//         printf("Largest = %d\n", b);
//     else
//         printf("Largest = %d\n", c);
// 
//     return 0;
// }


// Program 35: WAP to read an array and print the sum of its elements
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int sum = 0;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
// 
//     printf("Sum = %d\n", sum);
//     return 0;
// }


// Program 36: WAP to find the maximum element in an array
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int max;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
// 
//     max = arr[0];
//     for (i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }
// 
//     printf("Maximum = %d\n", max);
//     return 0;
// }


// Program 37: WAP to find the length of a string without using strlen()
// #include <stdio.h>
// 
// int main() {
//     char str[100];
//     int i = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     while (str[i] != '\0' && str[i] != '\n') {
//         i++;
//     }
// 
//     printf("Length = %d\n", i);
//     return 0;
// }


// Program 38: WAP to count vowels in a string
// #include <stdio.h>
// 
// int main() {
//     char str[200];
//     int i, count = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     for (i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
//             count++;
//         }
//     }
// 
//     printf("Number of vowels = %d\n", count);
//     return 0;
// }


// Program 39: WAP to define a structure for a student and print its details
// #include <stdio.h>
// 
// struct Student {
//     char name[50];
//     int roll;
//     float marks;
// };
// 
// int main() {
//     struct Student s;
// 
//     printf("Enter name: ");
//     fgets(s.name, sizeof(s.name), stdin);
// 
//     printf("Enter roll: ");
//     scanf("%d", &s.roll);
// 
//     printf("Enter marks: ");
//     scanf("%f", &s.marks);
// 
//     printf("\n--- Student Details ---\n");
//     printf("Name  : %s", s.name);
//     printf("Roll  : %d\n", s.roll);
//     printf("Marks : %.2f\n", s.marks);
// 
//     return 0;
// }


// Program 40: WAP to write a line to a file and then read it back
// #include <stdio.h>
// 
// int main() {
//     FILE *fp;
//     char line[100];
// 
//     fp = fopen("data.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing.\n");
//         return 1;
//     }
// 
//     printf("Enter a line: ");
//     fgets(line, sizeof(line), stdin);
//     fputs(line, fp);
//     fclose(fp);
// 
//     fp = fopen("data.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file for reading.\n");
//         return 1;
//     }
// 
//     printf("Contents of file:\n");
//     while (fgets(line, sizeof(line), fp)) {
//         printf("%s", line);
//     }
// 
//     fclose(fp);
//     return 0;
// }


// Program 41: WAP to print Hello World
// #include <stdio.h>
// 
// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// Program 42: WAP to add two integers
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     printf("Sum = %d\n", a + b);
//     return 0;
// }


// Program 43: WAP to check whether a number is even or odd
// #include <stdio.h>
// 
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("%d is even\n", n);
//     else
//         printf("%d is odd\n", n);
//     return 0;
// }


// Program 44: WAP to print the first and last digit of a number
// #include <stdio.h>
// 
// int main() {
//     int i, firstDigit, lastDigit;
// 
//     printf("Enter a number: ");
//     scanf("%d", &i);
// 
//     lastDigit = i % 10;
// 
//     firstDigit = i;
//     while (firstDigit >= 10) {
//         firstDigit = firstDigit / 10;
//     }
// 
//     printf("First digit: %d\n", firstDigit);
//     printf("Last digit: %d\n", lastDigit);
// 
//     return 0;
// }


// Program 45: WAP to check whether a given year is a leap year or not
// #include <stdio.h>
// 
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }
//     return 0;
// }


// Program 46: WAP to find GCD and LCM of two numbers using Euclid's algorithm
// #include <stdio.h>
// 
// int main() {
//     int a, b, x, y, gcd, lcm;
// 
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// 
//     x = a;
//     y = b;
// 
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
// 
//     gcd = a;
//     lcm = (x * y) / gcd;
// 
//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);
// 
//     return 0;
// }


// Program 47: WAP to input marks and print the grade
// #include <stdio.h>
// 
// int main() {
//     int marks;
// 
//     printf("Enter marks: ");
//     scanf("%d", &marks);
// 
//     if (marks > 90) {
//         printf("Grade: A\n");
//     } else if (marks > 70) {
//         printf("Grade: B\n");
//     } else if (marks >= 40) {
//         printf("Grade: C\n");
//     } else {
//         printf("Grade: F\n");
//     }
// 
//     return 0;
// }


// Program 48: WAP to calculate the sum of integers between 9 and 300 divisible by 7 but not by 63
// #include <stdio.h>
// 
// int main() {
//     int i, sum = 0;
// 
//     for (i = 9; i <= 300; i++) {
//         if (i % 7 == 0 && i % 63 != 0) {
//             sum += i;
//         }
//     }
// 
//     printf("Sum = %d\n", sum);
// 
//     return 0;
// }


// Program 49: WAP to print digits of a number in reverse order and compute the sum of digits
// #include <stdio.h>
// 
// int main() {
//     int num, sum = 0, rem;
// 
//     printf("Enter a number: ");
//     scanf("%d", &num);
// 
//     printf("Digits in reverse order: ");
//     for (; num > 0; num = num / 10) {
//         rem = num % 10;
//         printf("%d ", rem);
//         sum += rem;
//     }
// 
//     printf("\nSum of digits = %d\n", sum);
// 
//     return 0;
// }


// Program 50: WAP to compute a^2*b + a^2*b^2 + a^2*b^4
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     long long term1, term2, term3;
// 
//     printf("Enter a and b: ");
//     scanf("%d %d", &a, &b);
// 
//     long long a2 = (long long)a * a;
//     long long b2 = (long long)b * b;
//     long long b4 = b2 * b2;
// 
//     term1 = a2 * b;
//     term2 = a2 * b2;
//     term3 = a2 * b4;
// 
//     printf("a^2*b = %lld\n", term1);
//     printf("a^2*b^2 = %lld\n", term2);
//     printf("a^2*b^4 = %lld\n", term3);
//     printf("Sum = %lld\n", term1 + term2 + term3);
// 
//     return 0;
// }


// Program 51: WAP to print numbers from 2 to sqrt(n) with step 3 using a while loop
// #include <stdio.h>
// #include <math.h>
// 
// int main() {
//     int n;
//     int i = 2;
// 
//     printf("Enter n: ");
//     scanf("%d", &n);
// 
//     while (i <= sqrt(n)) {
//         printf("%d ", i);
//         i += 3;
//     }
// 
//     printf("\n");
//     return 0;
// }


// Program 52: WAP to find the factorial of a number using loop
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
// 
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
// 
//     if (n < 0) {
//         printf("Factorial not defined for negative numbers.\n");
//         return 0;
//     }
// 
//     for (i = 1; i <= n; i++) {
//         fact *= i;
//     }
// 
//     printf("Factorial of %d = %llu\n", n, fact);
//     return 0;
// }


// Program 53: WAP to print Fibonacci series up to N terms
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int a = 0, b = 1, c;
// 
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
// 
//     printf("Fibonacci series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     printf("\n");
// 
//     return 0;
// }


// Program 54: WAP to find the largest of three numbers
// #include <stdio.h>
// 
// int main() {
//     int a, b, c;
//     printf("Enter three integers: ");
//     scanf("%d %d %d", &a, &b, &c);
// 
//     if (a >= b && a >= c)
//         printf("Largest = %d\n", a);
//     else if (b >= a && b >= c)
//         printf("Largest = %d\n", b);
//     else
//         printf("Largest = %d\n", c);
// 
//     return 0;
// }


// Program 55: WAP to read an array and print the sum of its elements
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int sum = 0;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
// 
//     printf("Sum = %d\n", sum);
//     return 0;
// }


// Program 56: WAP to find the maximum element in an array
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int max;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
// 
//     max = arr[0];
//     for (i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }
// 
//     printf("Maximum = %d\n", max);
//     return 0;
// }


// Program 57: WAP to find the length of a string without using strlen()
// #include <stdio.h>
// 
// int main() {
//     char str[100];
//     int i = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     while (str[i] != '\0' && str[i] != '\n') {
//         i++;
//     }
// 
//     printf("Length = %d\n", i);
//     return 0;
// }


// Program 58: WAP to count vowels in a string
// #include <stdio.h>
// 
// int main() {
//     char str[200];
//     int i, count = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     for (i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
//             count++;
//         }
//     }
// 
//     printf("Number of vowels = %d\n", count);
//     return 0;
// }


// Program 59: WAP to define a structure for a student and print its details
// #include <stdio.h>
// 
// struct Student {
//     char name[50];
//     int roll;
//     float marks;
// };
// 
// int main() {
//     struct Student s;
// 
//     printf("Enter name: ");
//     fgets(s.name, sizeof(s.name), stdin);
// 
//     printf("Enter roll: ");
//     scanf("%d", &s.roll);
// 
//     printf("Enter marks: ");
//     scanf("%f", &s.marks);
// 
//     printf("\n--- Student Details ---\n");
//     printf("Name  : %s", s.name);
//     printf("Roll  : %d\n", s.roll);
//     printf("Marks : %.2f\n", s.marks);
// 
//     return 0;
// }


// Program 60: WAP to write a line to a file and then read it back
// #include <stdio.h>
// 
// int main() {
//     FILE *fp;
//     char line[100];
// 
//     fp = fopen("data.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing.\n");
//         return 1;
//     }
// 
//     printf("Enter a line: ");
//     fgets(line, sizeof(line), stdin);
//     fputs(line, fp);
//     fclose(fp);
// 
//     fp = fopen("data.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file for reading.\n");
//         return 1;
//     }
// 
//     printf("Contents of file:\n");
//     while (fgets(line, sizeof(line), fp)) {
//         printf("%s", line);
//     }
// 
//     fclose(fp);
//     return 0;
// }


// Program 61: WAP to print Hello World
// #include <stdio.h>
// 
// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// Program 62: WAP to add two integers
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     printf("Sum = %d\n", a + b);
//     return 0;
// }


// Program 63: WAP to check whether a number is even or odd
// #include <stdio.h>
// 
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("%d is even\n", n);
//     else
//         printf("%d is odd\n", n);
//     return 0;
// }


// Program 64: WAP to print the first and last digit of a number
// #include <stdio.h>
// 
// int main() {
//     int i, firstDigit, lastDigit;
// 
//     printf("Enter a number: ");
//     scanf("%d", &i);
// 
//     lastDigit = i % 10;
// 
//     firstDigit = i;
//     while (firstDigit >= 10) {
//         firstDigit = firstDigit / 10;
//     }
// 
//     printf("First digit: %d\n", firstDigit);
//     printf("Last digit: %d\n", lastDigit);
// 
//     return 0;
// }


// Program 65: WAP to check whether a given year is a leap year or not
// #include <stdio.h>
// 
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }
//     return 0;
// }


// Program 66: WAP to find GCD and LCM of two numbers using Euclid's algorithm
// #include <stdio.h>
// 
// int main() {
//     int a, b, x, y, gcd, lcm;
// 
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// 
//     x = a;
//     y = b;
// 
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
// 
//     gcd = a;
//     lcm = (x * y) / gcd;
// 
//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);
// 
//     return 0;
// }


// Program 67: WAP to input marks and print the grade
// #include <stdio.h>
// 
// int main() {
//     int marks;
// 
//     printf("Enter marks: ");
//     scanf("%d", &marks);
// 
//     if (marks > 90) {
//         printf("Grade: A\n");
//     } else if (marks > 70) {
//         printf("Grade: B\n");
//     } else if (marks >= 40) {
//         printf("Grade: C\n");
//     } else {
//         printf("Grade: F\n");
//     }
// 
//     return 0;
// }


// Program 68: WAP to calculate the sum of integers between 9 and 300 divisible by 7 but not by 63
// #include <stdio.h>
// 
// int main() {
//     int i, sum = 0;
// 
//     for (i = 9; i <= 300; i++) {
//         if (i % 7 == 0 && i % 63 != 0) {
//             sum += i;
//         }
//     }
// 
//     printf("Sum = %d\n", sum);
// 
//     return 0;
// }


// Program 69: WAP to print digits of a number in reverse order and compute the sum of digits
// #include <stdio.h>
// 
// int main() {
//     int num, sum = 0, rem;
// 
//     printf("Enter a number: ");
//     scanf("%d", &num);
// 
//     printf("Digits in reverse order: ");
//     for (; num > 0; num = num / 10) {
//         rem = num % 10;
//         printf("%d ", rem);
//         sum += rem;
//     }
// 
//     printf("\nSum of digits = %d\n", sum);
// 
//     return 0;
// }


// Program 70: WAP to compute a^2*b + a^2*b^2 + a^2*b^4
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     long long term1, term2, term3;
// 
//     printf("Enter a and b: ");
//     scanf("%d %d", &a, &b);
// 
//     long long a2 = (long long)a * a;
//     long long b2 = (long long)b * b;
//     long long b4 = b2 * b2;
// 
//     term1 = a2 * b;
//     term2 = a2 * b2;
//     term3 = a2 * b4;
// 
//     printf("a^2*b = %lld\n", term1);
//     printf("a^2*b^2 = %lld\n", term2);
//     printf("a^2*b^4 = %lld\n", term3);
//     printf("Sum = %lld\n", term1 + term2 + term3);
// 
//     return 0;
// }


// Program 71: WAP to print numbers from 2 to sqrt(n) with step 3 using a while loop
// #include <stdio.h>
// #include <math.h>
// 
// int main() {
//     int n;
//     int i = 2;
// 
//     printf("Enter n: ");
//     scanf("%d", &n);
// 
//     while (i <= sqrt(n)) {
//         printf("%d ", i);
//         i += 3;
//     }
// 
//     printf("\n");
//     return 0;
// }


// Program 72: WAP to find the factorial of a number using loop
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
// 
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
// 
//     if (n < 0) {
//         printf("Factorial not defined for negative numbers.\n");
//         return 0;
//     }
// 
//     for (i = 1; i <= n; i++) {
//         fact *= i;
//     }
// 
//     printf("Factorial of %d = %llu\n", n, fact);
//     return 0;
// }


// Program 73: WAP to print Fibonacci series up to N terms
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int a = 0, b = 1, c;
// 
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
// 
//     printf("Fibonacci series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     printf("\n");
// 
//     return 0;
// }


// Program 74: WAP to find the largest of three numbers
// #include <stdio.h>
// 
// int main() {
//     int a, b, c;
//     printf("Enter three integers: ");
//     scanf("%d %d %d", &a, &b, &c);
// 
//     if (a >= b && a >= c)
//         printf("Largest = %d\n", a);
//     else if (b >= a && b >= c)
//         printf("Largest = %d\n", b);
//     else
//         printf("Largest = %d\n", c);
// 
//     return 0;
// }


// Program 75: WAP to read an array and print the sum of its elements
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int sum = 0;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
// 
//     printf("Sum = %d\n", sum);
//     return 0;
// }


// Program 76: WAP to find the maximum element in an array
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int max;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
// 
//     max = arr[0];
//     for (i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }
// 
//     printf("Maximum = %d\n", max);
//     return 0;
// }


// Program 77: WAP to find the length of a string without using strlen()
// #include <stdio.h>
// 
// int main() {
//     char str[100];
//     int i = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     while (str[i] != '\0' && str[i] != '\n') {
//         i++;
//     }
// 
//     printf("Length = %d\n", i);
//     return 0;
// }


// Program 78: WAP to count vowels in a string
// #include <stdio.h>
// 
// int main() {
//     char str[200];
//     int i, count = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     for (i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
//             count++;
//         }
//     }
// 
//     printf("Number of vowels = %d\n", count);
//     return 0;
// }


// Program 79: WAP to define a structure for a student and print its details
// #include <stdio.h>
// 
// struct Student {
//     char name[50];
//     int roll;
//     float marks;
// };
// 
// int main() {
//     struct Student s;
// 
//     printf("Enter name: ");
//     fgets(s.name, sizeof(s.name), stdin);
// 
//     printf("Enter roll: ");
//     scanf("%d", &s.roll);
// 
//     printf("Enter marks: ");
//     scanf("%f", &s.marks);
// 
//     printf("\n--- Student Details ---\n");
//     printf("Name  : %s", s.name);
//     printf("Roll  : %d\n", s.roll);
//     printf("Marks : %.2f\n", s.marks);
// 
//     return 0;
// }


// Program 80: WAP to write a line to a file and then read it back
// #include <stdio.h>
// 
// int main() {
//     FILE *fp;
//     char line[100];
// 
//     fp = fopen("data.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing.\n");
//         return 1;
//     }
// 
//     printf("Enter a line: ");
//     fgets(line, sizeof(line), stdin);
//     fputs(line, fp);
//     fclose(fp);
// 
//     fp = fopen("data.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file for reading.\n");
//         return 1;
//     }
// 
//     printf("Contents of file:\n");
//     while (fgets(line, sizeof(line), fp)) {
//         printf("%s", line);
//     }
// 
//     fclose(fp);
//     return 0;
// }


// Program 81: WAP to print Hello World
// #include <stdio.h>
// 
// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// Program 82: WAP to add two integers
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     printf("Sum = %d\n", a + b);
//     return 0;
// }


// Program 83: WAP to check whether a number is even or odd
// #include <stdio.h>
// 
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("%d is even\n", n);
//     else
//         printf("%d is odd\n", n);
//     return 0;
// }


// Program 84: WAP to print the first and last digit of a number
// #include <stdio.h>
// 
// int main() {
//     int i, firstDigit, lastDigit;
// 
//     printf("Enter a number: ");
//     scanf("%d", &i);
// 
//     lastDigit = i % 10;
// 
//     firstDigit = i;
//     while (firstDigit >= 10) {
//         firstDigit = firstDigit / 10;
//     }
// 
//     printf("First digit: %d\n", firstDigit);
//     printf("Last digit: %d\n", lastDigit);
// 
//     return 0;
// }


// Program 85: WAP to check whether a given year is a leap year or not
// #include <stdio.h>
// 
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }
//     return 0;
// }


// Program 86: WAP to find GCD and LCM of two numbers using Euclid's algorithm
// #include <stdio.h>
// 
// int main() {
//     int a, b, x, y, gcd, lcm;
// 
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// 
//     x = a;
//     y = b;
// 
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
// 
//     gcd = a;
//     lcm = (x * y) / gcd;
// 
//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);
// 
//     return 0;
// }


// Program 87: WAP to input marks and print the grade
// #include <stdio.h>
// 
// int main() {
//     int marks;
// 
//     printf("Enter marks: ");
//     scanf("%d", &marks);
// 
//     if (marks > 90) {
//         printf("Grade: A\n");
//     } else if (marks > 70) {
//         printf("Grade: B\n");
//     } else if (marks >= 40) {
//         printf("Grade: C\n");
//     } else {
//         printf("Grade: F\n");
//     }
// 
//     return 0;
// }


// Program 88: WAP to calculate the sum of integers between 9 and 300 divisible by 7 but not by 63
// #include <stdio.h>
// 
// int main() {
//     int i, sum = 0;
// 
//     for (i = 9; i <= 300; i++) {
//         if (i % 7 == 0 && i % 63 != 0) {
//             sum += i;
//         }
//     }
// 
//     printf("Sum = %d\n", sum);
// 
//     return 0;
// }


// Program 89: WAP to print digits of a number in reverse order and compute the sum of digits
// #include <stdio.h>
// 
// int main() {
//     int num, sum = 0, rem;
// 
//     printf("Enter a number: ");
//     scanf("%d", &num);
// 
//     printf("Digits in reverse order: ");
//     for (; num > 0; num = num / 10) {
//         rem = num % 10;
//         printf("%d ", rem);
//         sum += rem;
//     }
// 
//     printf("\nSum of digits = %d\n", sum);
// 
//     return 0;
// }


// Program 90: WAP to compute a^2*b + a^2*b^2 + a^2*b^4
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     long long term1, term2, term3;
// 
//     printf("Enter a and b: ");
//     scanf("%d %d", &a, &b);
// 
//     long long a2 = (long long)a * a;
//     long long b2 = (long long)b * b;
//     long long b4 = b2 * b2;
// 
//     term1 = a2 * b;
//     term2 = a2 * b2;
//     term3 = a2 * b4;
// 
//     printf("a^2*b = %lld\n", term1);
//     printf("a^2*b^2 = %lld\n", term2);
//     printf("a^2*b^4 = %lld\n", term3);
//     printf("Sum = %lld\n", term1 + term2 + term3);
// 
//     return 0;
// }


// Program 91: WAP to print numbers from 2 to sqrt(n) with step 3 using a while loop
// #include <stdio.h>
// #include <math.h>
// 
// int main() {
//     int n;
//     int i = 2;
// 
//     printf("Enter n: ");
//     scanf("%d", &n);
// 
//     while (i <= sqrt(n)) {
//         printf("%d ", i);
//         i += 3;
//     }
// 
//     printf("\n");
//     return 0;
// }


// Program 92: WAP to find the factorial of a number using loop
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
// 
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
// 
//     if (n < 0) {
//         printf("Factorial not defined for negative numbers.\n");
//         return 0;
//     }
// 
//     for (i = 1; i <= n; i++) {
//         fact *= i;
//     }
// 
//     printf("Factorial of %d = %llu\n", n, fact);
//     return 0;
// }


// Program 93: WAP to print Fibonacci series up to N terms
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int a = 0, b = 1, c;
// 
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
// 
//     printf("Fibonacci series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     printf("\n");
// 
//     return 0;
// }


// Program 94: WAP to find the largest of three numbers
// #include <stdio.h>
// 
// int main() {
//     int a, b, c;
//     printf("Enter three integers: ");
//     scanf("%d %d %d", &a, &b, &c);
// 
//     if (a >= b && a >= c)
//         printf("Largest = %d\n", a);
//     else if (b >= a && b >= c)
//         printf("Largest = %d\n", b);
//     else
//         printf("Largest = %d\n", c);
// 
//     return 0;
// }


// Program 95: WAP to read an array and print the sum of its elements
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int sum = 0;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
// 
//     printf("Sum = %d\n", sum);
//     return 0;
// }


// Program 96: WAP to find the maximum element in an array
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int max;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
// 
//     max = arr[0];
//     for (i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }
// 
//     printf("Maximum = %d\n", max);
//     return 0;
// }


// Program 97: WAP to find the length of a string without using strlen()
// #include <stdio.h>
// 
// int main() {
//     char str[100];
//     int i = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     while (str[i] != '\0' && str[i] != '\n') {
//         i++;
//     }
// 
//     printf("Length = %d\n", i);
//     return 0;
// }


// Program 98: WAP to count vowels in a string
// #include <stdio.h>
// 
// int main() {
//     char str[200];
//     int i, count = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     for (i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
//             count++;
//         }
//     }
// 
//     printf("Number of vowels = %d\n", count);
//     return 0;
// }


// Program 99: WAP to define a structure for a student and print its details
// #include <stdio.h>
// 
// struct Student {
//     char name[50];
//     int roll;
//     float marks;
// };
// 
// int main() {
//     struct Student s;
// 
//     printf("Enter name: ");
//     fgets(s.name, sizeof(s.name), stdin);
// 
//     printf("Enter roll: ");
//     scanf("%d", &s.roll);
// 
//     printf("Enter marks: ");
//     scanf("%f", &s.marks);
// 
//     printf("\n--- Student Details ---\n");
//     printf("Name  : %s", s.name);
//     printf("Roll  : %d\n", s.roll);
//     printf("Marks : %.2f\n", s.marks);
// 
//     return 0;
// }


// Program 100: WAP to write a line to a file and then read it back
// #include <stdio.h>
// 
// int main() {
//     FILE *fp;
//     char line[100];
// 
//     fp = fopen("data.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing.\n");
//         return 1;
//     }
// 
//     printf("Enter a line: ");
//     fgets(line, sizeof(line), stdin);
//     fputs(line, fp);
//     fclose(fp);
// 
//     fp = fopen("data.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file for reading.\n");
//         return 1;
//     }
// 
//     printf("Contents of file:\n");
//     while (fgets(line, sizeof(line), fp)) {
//         printf("%s", line);
//     }
// 
//     fclose(fp);
//     return 0;
// }


// Program 101: WAP to print Hello World
// #include <stdio.h>
// 
// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// Program 102: WAP to add two integers
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     printf("Sum = %d\n", a + b);
//     return 0;
// }


// Program 103: WAP to check whether a number is even or odd
// #include <stdio.h>
// 
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("%d is even\n", n);
//     else
//         printf("%d is odd\n", n);
//     return 0;
// }


// Program 104: WAP to print the first and last digit of a number
// #include <stdio.h>
// 
// int main() {
//     int i, firstDigit, lastDigit;
// 
//     printf("Enter a number: ");
//     scanf("%d", &i);
// 
//     lastDigit = i % 10;
// 
//     firstDigit = i;
//     while (firstDigit >= 10) {
//         firstDigit = firstDigit / 10;
//     }
// 
//     printf("First digit: %d\n", firstDigit);
//     printf("Last digit: %d\n", lastDigit);
// 
//     return 0;
// }


// Program 105: WAP to check whether a given year is a leap year or not
// #include <stdio.h>
// 
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }
//     return 0;
// }


// Program 106: WAP to find GCD and LCM of two numbers using Euclid's algorithm
// #include <stdio.h>
// 
// int main() {
//     int a, b, x, y, gcd, lcm;
// 
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// 
//     x = a;
//     y = b;
// 
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
// 
//     gcd = a;
//     lcm = (x * y) / gcd;
// 
//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);
// 
//     return 0;
// }


// Program 107: WAP to input marks and print the grade
// #include <stdio.h>
// 
// int main() {
//     int marks;
// 
//     printf("Enter marks: ");
//     scanf("%d", &marks);
// 
//     if (marks > 90) {
//         printf("Grade: A\n");
//     } else if (marks > 70) {
//         printf("Grade: B\n");
//     } else if (marks >= 40) {
//         printf("Grade: C\n");
//     } else {
//         printf("Grade: F\n");
//     }
// 
//     return 0;
// }


// Program 108: WAP to calculate the sum of integers between 9 and 300 divisible by 7 but not by 63
// #include <stdio.h>
// 
// int main() {
//     int i, sum = 0;
// 
//     for (i = 9; i <= 300; i++) {
//         if (i % 7 == 0 && i % 63 != 0) {
//             sum += i;
//         }
//     }
// 
//     printf("Sum = %d\n", sum);
// 
//     return 0;
// }


// Program 109: WAP to print digits of a number in reverse order and compute the sum of digits
// #include <stdio.h>
// 
// int main() {
//     int num, sum = 0, rem;
// 
//     printf("Enter a number: ");
//     scanf("%d", &num);
// 
//     printf("Digits in reverse order: ");
//     for (; num > 0; num = num / 10) {
//         rem = num % 10;
//         printf("%d ", rem);
//         sum += rem;
//     }
// 
//     printf("\nSum of digits = %d\n", sum);
// 
//     return 0;
// }


// Program 110: WAP to compute a^2*b + a^2*b^2 + a^2*b^4
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     long long term1, term2, term3;
// 
//     printf("Enter a and b: ");
//     scanf("%d %d", &a, &b);
// 
//     long long a2 = (long long)a * a;
//     long long b2 = (long long)b * b;
//     long long b4 = b2 * b2;
// 
//     term1 = a2 * b;
//     term2 = a2 * b2;
//     term3 = a2 * b4;
// 
//     printf("a^2*b = %lld\n", term1);
//     printf("a^2*b^2 = %lld\n", term2);
//     printf("a^2*b^4 = %lld\n", term3);
//     printf("Sum = %lld\n", term1 + term2 + term3);
// 
//     return 0;
// }


// Program 111: WAP to print numbers from 2 to sqrt(n) with step 3 using a while loop
// #include <stdio.h>
// #include <math.h>
// 
// int main() {
//     int n;
//     int i = 2;
// 
//     printf("Enter n: ");
//     scanf("%d", &n);
// 
//     while (i <= sqrt(n)) {
//         printf("%d ", i);
//         i += 3;
//     }
// 
//     printf("\n");
//     return 0;
// }


// Program 112: WAP to find the factorial of a number using loop
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
// 
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
// 
//     if (n < 0) {
//         printf("Factorial not defined for negative numbers.\n");
//         return 0;
//     }
// 
//     for (i = 1; i <= n; i++) {
//         fact *= i;
//     }
// 
//     printf("Factorial of %d = %llu\n", n, fact);
//     return 0;
// }


// Program 113: WAP to print Fibonacci series up to N terms
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int a = 0, b = 1, c;
// 
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
// 
//     printf("Fibonacci series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     printf("\n");
// 
//     return 0;
// }


// Program 114: WAP to find the largest of three numbers
// #include <stdio.h>
// 
// int main() {
//     int a, b, c;
//     printf("Enter three integers: ");
//     scanf("%d %d %d", &a, &b, &c);
// 
//     if (a >= b && a >= c)
//         printf("Largest = %d\n", a);
//     else if (b >= a && b >= c)
//         printf("Largest = %d\n", b);
//     else
//         printf("Largest = %d\n", c);
// 
//     return 0;
// }


// Program 115: WAP to read an array and print the sum of its elements
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int sum = 0;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
// 
//     printf("Sum = %d\n", sum);
//     return 0;
// }


// Program 116: WAP to find the maximum element in an array
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int max;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
// 
//     max = arr[0];
//     for (i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }
// 
//     printf("Maximum = %d\n", max);
//     return 0;
// }


// Program 117: WAP to find the length of a string without using strlen()
// #include <stdio.h>
// 
// int main() {
//     char str[100];
//     int i = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     while (str[i] != '\0' && str[i] != '\n') {
//         i++;
//     }
// 
//     printf("Length = %d\n", i);
//     return 0;
// }


// Program 118: WAP to count vowels in a string
// #include <stdio.h>
// 
// int main() {
//     char str[200];
//     int i, count = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     for (i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
//             count++;
//         }
//     }
// 
//     printf("Number of vowels = %d\n", count);
//     return 0;
// }


// Program 119: WAP to define a structure for a student and print its details
// #include <stdio.h>
// 
// struct Student {
//     char name[50];
//     int roll;
//     float marks;
// };
// 
// int main() {
//     struct Student s;
// 
//     printf("Enter name: ");
//     fgets(s.name, sizeof(s.name), stdin);
// 
//     printf("Enter roll: ");
//     scanf("%d", &s.roll);
// 
//     printf("Enter marks: ");
//     scanf("%f", &s.marks);
// 
//     printf("\n--- Student Details ---\n");
//     printf("Name  : %s", s.name);
//     printf("Roll  : %d\n", s.roll);
//     printf("Marks : %.2f\n", s.marks);
// 
//     return 0;
// }


// Program 120: WAP to write a line to a file and then read it back
// #include <stdio.h>
// 
// int main() {
//     FILE *fp;
//     char line[100];
// 
//     fp = fopen("data.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing.\n");
//         return 1;
//     }
// 
//     printf("Enter a line: ");
//     fgets(line, sizeof(line), stdin);
//     fputs(line, fp);
//     fclose(fp);
// 
//     fp = fopen("data.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file for reading.\n");
//         return 1;
//     }
// 
//     printf("Contents of file:\n");
//     while (fgets(line, sizeof(line), fp)) {
//         printf("%s", line);
//     }
// 
//     fclose(fp);
//     return 0;
// }


// Program 121: WAP to print Hello World
// #include <stdio.h>
// 
// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// Program 122: WAP to add two integers
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     printf("Sum = %d\n", a + b);
//     return 0;
// }


// Program 123: WAP to check whether a number is even or odd
// #include <stdio.h>
// 
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("%d is even\n", n);
//     else
//         printf("%d is odd\n", n);
//     return 0;
// }


// Program 124: WAP to print the first and last digit of a number
// #include <stdio.h>
// 
// int main() {
//     int i, firstDigit, lastDigit;
// 
//     printf("Enter a number: ");
//     scanf("%d", &i);
// 
//     lastDigit = i % 10;
// 
//     firstDigit = i;
//     while (firstDigit >= 10) {
//         firstDigit = firstDigit / 10;
//     }
// 
//     printf("First digit: %d\n", firstDigit);
//     printf("Last digit: %d\n", lastDigit);
// 
//     return 0;
// }


// Program 125: WAP to check whether a given year is a leap year or not
// #include <stdio.h>
// 
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }
//     return 0;
// }


// Program 126: WAP to find GCD and LCM of two numbers using Euclid's algorithm
// #include <stdio.h>
// 
// int main() {
//     int a, b, x, y, gcd, lcm;
// 
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// 
//     x = a;
//     y = b;
// 
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
// 
//     gcd = a;
//     lcm = (x * y) / gcd;
// 
//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);
// 
//     return 0;
// }


// Program 127: WAP to input marks and print the grade
// #include <stdio.h>
// 
// int main() {
//     int marks;
// 
//     printf("Enter marks: ");
//     scanf("%d", &marks);
// 
//     if (marks > 90) {
//         printf("Grade: A\n");
//     } else if (marks > 70) {
//         printf("Grade: B\n");
//     } else if (marks >= 40) {
//         printf("Grade: C\n");
//     } else {
//         printf("Grade: F\n");
//     }
// 
//     return 0;
// }


// Program 128: WAP to calculate the sum of integers between 9 and 300 divisible by 7 but not by 63
// #include <stdio.h>
// 
// int main() {
//     int i, sum = 0;
// 
//     for (i = 9; i <= 300; i++) {
//         if (i % 7 == 0 && i % 63 != 0) {
//             sum += i;
//         }
//     }
// 
//     printf("Sum = %d\n", sum);
// 
//     return 0;
// }


// Program 129: WAP to print digits of a number in reverse order and compute the sum of digits
// #include <stdio.h>
// 
// int main() {
//     int num, sum = 0, rem;
// 
//     printf("Enter a number: ");
//     scanf("%d", &num);
// 
//     printf("Digits in reverse order: ");
//     for (; num > 0; num = num / 10) {
//         rem = num % 10;
//         printf("%d ", rem);
//         sum += rem;
//     }
// 
//     printf("\nSum of digits = %d\n", sum);
// 
//     return 0;
// }


// Program 130: WAP to compute a^2*b + a^2*b^2 + a^2*b^4
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     long long term1, term2, term3;
// 
//     printf("Enter a and b: ");
//     scanf("%d %d", &a, &b);
// 
//     long long a2 = (long long)a * a;
//     long long b2 = (long long)b * b;
//     long long b4 = b2 * b2;
// 
//     term1 = a2 * b;
//     term2 = a2 * b2;
//     term3 = a2 * b4;
// 
//     printf("a^2*b = %lld\n", term1);
//     printf("a^2*b^2 = %lld\n", term2);
//     printf("a^2*b^4 = %lld\n", term3);
//     printf("Sum = %lld\n", term1 + term2 + term3);
// 
//     return 0;
// }


// Program 131: WAP to print numbers from 2 to sqrt(n) with step 3 using a while loop
// #include <stdio.h>
// #include <math.h>
// 
// int main() {
//     int n;
//     int i = 2;
// 
//     printf("Enter n: ");
//     scanf("%d", &n);
// 
//     while (i <= sqrt(n)) {
//         printf("%d ", i);
//         i += 3;
//     }
// 
//     printf("\n");
//     return 0;
// }


// Program 132: WAP to find the factorial of a number using loop
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
// 
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
// 
//     if (n < 0) {
//         printf("Factorial not defined for negative numbers.\n");
//         return 0;
//     }
// 
//     for (i = 1; i <= n; i++) {
//         fact *= i;
//     }
// 
//     printf("Factorial of %d = %llu\n", n, fact);
//     return 0;
// }


// Program 133: WAP to print Fibonacci series up to N terms
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int a = 0, b = 1, c;
// 
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
// 
//     printf("Fibonacci series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     printf("\n");
// 
//     return 0;
// }


// Program 134: WAP to find the largest of three numbers
// #include <stdio.h>
// 
// int main() {
//     int a, b, c;
//     printf("Enter three integers: ");
//     scanf("%d %d %d", &a, &b, &c);
// 
//     if (a >= b && a >= c)
//         printf("Largest = %d\n", a);
//     else if (b >= a && b >= c)
//         printf("Largest = %d\n", b);
//     else
//         printf("Largest = %d\n", c);
// 
//     return 0;
// }


// Program 135: WAP to read an array and print the sum of its elements
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int sum = 0;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
// 
//     printf("Sum = %d\n", sum);
//     return 0;
// }


// Program 136: WAP to find the maximum element in an array
// #include <stdio.h>
// 
// int main() {
//     int n, i;
//     int arr[100];
//     int max;
// 
//     printf("Enter number of elements (max 100): ");
//     scanf("%d", &n);
// 
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
// 
//     max = arr[0];
//     for (i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }
// 
//     printf("Maximum = %d\n", max);
//     return 0;
// }


// Program 137: WAP to find the length of a string without using strlen()
// #include <stdio.h>
// 
// int main() {
//     char str[100];
//     int i = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     while (str[i] != '\0' && str[i] != '\n') {
//         i++;
//     }
// 
//     printf("Length = %d\n", i);
//     return 0;
// }


// Program 138: WAP to count vowels in a string
// #include <stdio.h>
// 
// int main() {
//     char str[200];
//     int i, count = 0;
// 
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
// 
//     for (i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
//             count++;
//         }
//     }
// 
//     printf("Number of vowels = %d\n", count);
//     return 0;
// }


// Program 139: WAP to define a structure for a student and print its details
// #include <stdio.h>
// 
// struct Student {
//     char name[50];
//     int roll;
//     float marks;
// };
// 
// int main() {
//     struct Student s;
// 
//     printf("Enter name: ");
//     fgets(s.name, sizeof(s.name), stdin);
// 
//     printf("Enter roll: ");
//     scanf("%d", &s.roll);
// 
//     printf("Enter marks: ");
//     scanf("%f", &s.marks);
// 
//     printf("\n--- Student Details ---\n");
//     printf("Name  : %s", s.name);
//     printf("Roll  : %d\n", s.roll);
//     printf("Marks : %.2f\n", s.marks);
// 
//     return 0;
// }


// Program 140: WAP to write a line to a file and then read it back
// #include <stdio.h>
// 
// int main() {
//     FILE *fp;
//     char line[100];
// 
//     fp = fopen("data.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing.\n");
//         return 1;
//     }
// 
//     printf("Enter a line: ");
//     fgets(line, sizeof(line), stdin);
//     fputs(line, fp);
//     fclose(fp);
// 
//     fp = fopen("data.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file for reading.\n");
//         return 1;
//     }
// 
//     printf("Contents of file:\n");
//     while (fgets(line, sizeof(line), fp)) {
//         printf("%s", line);
//     }
// 
//     fclose(fp);
//     return 0;
// }


// Program 141: WAP to print Hello World
// #include <stdio.h>
// 
// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// Program 142: WAP to add two integers
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     printf("Sum = %d\n", a + b);
//     return 0;
// }


// Program 143: WAP to check whether a number is even or odd
// #include <stdio.h>
// 
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("%d is even\n", n);
//     else
//         printf("%d is odd\n", n);
//     return 0;
// }


// Program 144: WAP to print the first and last digit of a number
// #include <stdio.h>
// 
// int main() {
//     int i, firstDigit, lastDigit;
// 
//     printf("Enter a number: ");
//     scanf("%d", &i);
// 
//     lastDigit = i % 10;
// 
//     firstDigit = i;
//     while (firstDigit >= 10) {
//         firstDigit = firstDigit / 10;
//     }
// 
//     printf("First digit: %d\n", firstDigit);
//     printf("Last digit: %d\n", lastDigit);
// 
//     return 0;
// }


// Program 145: WAP to check whether a given year is a leap year or not
// #include <stdio.h>
// 
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }
//     return 0;
// }


// Program 146: WAP to find GCD and LCM of two numbers using Euclid's algorithm
// #include <stdio.h>
// 
// int main() {
//     int a, b, x, y, gcd, lcm;
// 
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// 
//     x = a;
//     y = b;
// 
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
// 
//     gcd = a;
//     lcm = (x * y) / gcd;
// 
//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);
// 
//     return 0;
// }


// Program 147: WAP to input marks and print the grade
// #include <stdio.h>
// 
// int main() {
//     int marks;
// 
//     printf("Enter marks: ");
//     scanf("%d", &marks);
// 
//     if (marks > 90) {
//         printf("Grade: A\n");
//     } else if (marks > 70) {
//         printf("Grade: B\n");
//     } else if (marks >= 40) {
//         printf("Grade: C\n");
//     } else {
//         printf("Grade: F\n");
//     }
// 
//     return 0;
// }


// Program 148: WAP to calculate the sum of integers between 9 and 300 divisible by 7 but not by 63
// #include <stdio.h>
// 
// int main() {
//     int i, sum = 0;
// 
//     for (i = 9; i <= 300; i++) {
//         if (i % 7 == 0 && i % 63 != 0) {
//             sum += i;
//         }
//     }
// 
//     printf("Sum = %d\n", sum);
// 
//     return 0;
// }


// Program 149: WAP to print digits of a number in reverse order and compute the sum of digits
// #include <stdio.h>
// 
// int main() {
//     int num, sum = 0, rem;
// 
//     printf("Enter a number: ");
//     scanf("%d", &num);
// 
//     printf("Digits in reverse order: ");
//     for (; num > 0; num = num / 10) {
//         rem = num % 10;
//         printf("%d ", rem);
//         sum += rem;
//     }
// 
//     printf("\nSum of digits = %d\n", sum);
// 
//     return 0;
// }


// Program 150: WAP to compute a^2*b + a^2*b^2 + a^2*b^4
// #include <stdio.h>
// 
// int main() {
//     int a, b;
//     long long term1, term2, term3;
// 
//     printf("Enter a and b: ");
//     scanf("%d %d", &a, &b);
// 
//     long long a2 = (long long)a * a;
//     long long b2 = (long long)b * b;
//     long long b4 = b2 * b2;
// 
//     term1 = a2 * b;
//     term2 = a2 * b2;
//     term3 = a2 * b4;
// 
//     printf("a^2*b = %lld\n", term1);
//     printf("a^2*b^2 = %lld\n", term2);
//     printf("a^2*b^4 = %lld\n", term3);
//     printf("Sum = %lld\n", term1 + term2 + term3);
// 
//     return 0;
// }

#include <stdio.h>

// Function to calculate the product of diagonal elements
int diagonalProduct(int matrix[10][10], int n) {
    int product = 1;
    for(int i = 0; i < n; i++) {
        product *= matrix[i][i];  // Multiply elements of the main diagonal
    }
    return product;
}

int main() {
    int n;
    int matrix[10][10];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = diagonalProduct(matrix, n);
    printf("Product of diagonal elements = %d\n", result);

    return 0;
}