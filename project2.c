// WAP to Sum two numbers 
// #include <stdio.h>

// int main(void) {
//     int a, b, sum;

//     // Input two numbers
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);

//     // Calculate sum
//     sum = a + b;

//     // Output result
//     printf("Sum of %d and %d is: %d\n", a, b, sum);

//     return 0;
// }

/* x= 20 and y 30 after swapiing x=30, y 20 */
//WAP to Swap two numbers 
/*#include<stdio.h>
int main()
{

    int x, y, temp;
    system("cls");

    x=20;
    y=30;
    printf( "Before Swapping the value of x = %d and y=%d\n",x,y);
    temp=x;
    x=y;
    y=temp;

    printf( "After Swapping the value of x = %d and y=%d",x,y);
}
*/

/*
#include<stdio.h>
int main(){
    int x , y , temp;
    system("cls");
    printf("enter two integer");
    scanf("%d %d", &x, &y);
    temp=x;
    printf("temp=%d and x =%dn",temp,x);
    x=y;
    y=temp;
    printf("the value after a swaping x = %d and y= %d", x , y);



    return 0;
}    
    */

//Metheod 2 
//without using the third variable

/*
#include<stdio.h>
int main(){
    int x,y;
    printf


    return 0;
}   
    */

/*
#include<stdio.h>
int main(){
    system("cls");
    char c = 'A';
    printf("the %c ASCII value  = %d", c,c);
    return 0;
}   
*/

//Wap to check the no is postive
/*
#include<stdio.h>
   int main(){
    int var;
    system("cls");
    printf("enter the integer");
    scanf("%d",&var);
    if (var>0);
    printf("Inside if block");
    printf("The number %d is positive", var);
    printf("outside if block");
   return 0;
   }

*/
/*
//Wap to check the no is postive or negative

#include<stdio.h>
   int main(){
    int var;

    printf("enter the integer");
    scanf("%d",&var);
    if (var>0)
    {
    printf("Inside if block");
    printf("The number %d is positive", var);
    }
    else
    {
        printf("inside the block");
        printf("the number %d is negative" ,var);

    }

    printf("outside if block");
   return 0;
   }
*/

/*
//Wap to check the no is postive or negative

#include<stdio.h>
   int main(){
    int x=16; int sum =0;
    int var;
    system("cls");

    printf("enter the integer");
    scanf("%d",&var);
    if (var>0)
    {
    printf("Inside if block");
    printf("The number %d is positive", var);
    int sum= var + x;
    printf("The sum of %d and %d=%d", var,x,sum);
    }
    else
    {
        printf("inside the block");
        printf("the number %d is negative" ,var);
        int sub = var - x;
        printf("The subtract of %d and %d=%d", var,x,sub);

    }

    printf("outside if block");
   return 0;
   }
*/

/*
#include<stdio.h>
int main(){
    int var;
    printf("enter the date :");
    scanf("%d",&var);

    if(var=1)
    {
        printf("monday");
    }    

     if(var=2)
    {
        printf("Tuesday");
    }    

 if(var=3)
    {
        printf("wednesday");
    }    
 if(var=4)
    {
        printf("Thursday");
    }    

 if(var=5)
    {
        printf("friday");
    }    

 if(var=6)
    {
        printf("saturday");
    }    

 if(var=7)
    {
        printf("sunday");
    }    

else {
printf("invalid");
}
 
return 0;
}
*/

/*
//Monday to sunday when date is put
#include <stdio.h>

int main() {
    int var;
    printf("Enter the date: ");
    scanf("%d", &var);

    if (var == 1) {
        printf("Monday\n");
    } else if (var == 2) {
        printf("Tuesday\n");
    } else if (var == 3) {
        printf("Wednesday\n");
    } else if (var == 4) {
        printf("Thursday\n");
    } else if (var == 5) {
        printf("Friday\n");
    } else if (var == 6) {
        printf("Saturday\n");
    } else if (var == 7) {
        printf("Sunday\n");
    } else {
        printf("Invalid \n");
    }

    return 0;
}

*/

/*
//WAP to check the given character is  vowel or not?
#include<stdio.h>
int main(){
    system("cls");
    char x;
    printf("enter the letter : ");
    scanf("%c", &x);
    
    if (x == 'a'){
    printf("valid");
    }
    else if ( x == 'e'){
    printf("valid");
    }
   

    else if ( x == 'i'){
    printf("valid");
    }
    else if ( x == 'o'){
    printf("valid");
    }

    else if ( x == 'u'){
    printf("valid");
    }
    else {
    printf("invalid");
    }

    return 0;
}
*/


//WAP to check if the no. is even or odd if even multiply by 2
// #include <stdio.h>

// int main() {
//     int num, result;
//     system("cls");
//     printf("Enter the number: ");
//     scanf("%d", &num);

//     if (num % 2 == 0) {
//         result = num * 2;
//         printf("The integer %d is even and after multiplication: %d\n", num, result);
//     } else {
//         result = num * 5;
//         printf("The integer %d is odd and after multiplication: %d\n", num, result);
//     }

//     return 0;
// }

//Nested statement
// #include <stdio.h>

// int main() {
//     system("cls");
//     char c;
//     int age;
    

//     printf("Enter character 'I' or 'i' if you are Indian: ");
//     scanf(" %c", &c);  // Fixed input format

//     if (c == 'I' || c == 'i') {
//         printf("Great! Enter your age: ");
//         scanf("%d", &age);

//         if (age >= 18) {
//             printf("The age is %d and you are eligible to vote.\n", age);
//         } else {
//             printf("The age is %d and you are not eligible to vote.\n", age);
//         }
//     } else {
//         printf("Sorry! You are not Indian.\n");
//     }

//     return 0;
// }

// WAP to check the number is positive,negative and zero
// #include <stdio.h>

// int main() {
//     int x;
//     printf("Enter the number: ");
//     scanf("%d", &x);

//     printf((x >= 0) ? ((x == 0) ? "zero" : "positive") : "negative");

//     return 0;
// }

// WAP to calculate the sum and percentage of studnets marks student ID and marks given by vote 
// If the %age to greater than 90 then grade in O
//             >80 & <90       A
//             >70 & <80       B
//             >60 & <70       B+
//             >50 & <60       C
//             below 50        Fail

// #include<stdio.h>
// intmain(){
//     float ID,marks,vote;

//     printf("enter the ID : ");
//     scanf("%f",&ID);

//     printf("enter the marks : ");
//     scanf("%f",&marks);

    

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int studentID, numSubjects, i;
//     float marks, total = 0, percentage;

//     // Input student ID and number of subjects
//     printf("Enter Student ID: ");
//     scanf("%d", &studentID);

//     printf("Enter number of subjects: ");
//     scanf("%d", &numSubjects);

//     // Input marks for each subject
//     for(i = 1; i <= numSubjects; i++) {
//         printf("Enter marks for subject %d: ", i);
//         scanf("%f", &marks);
//         total += marks;
//     }

//     // Calculate percentage
//     percentage = total / numSubjects;

//     // Output results
//     printf("\nStudent ID: %d\n", studentID);
//     printf("Total Marks: %.2f\n", total);
//     printf("Percentage: %.2f%%\n", percentage);

//     // Grade using nested ternary operator
//     printf("Grade: %s\n",
//         (percentage > 90) ? "O" :
//         (percentage > 80) ? "A" :
//         (percentage > 70) ? "B" :
//         (percentage > 60) ? "B+" :
//         (percentage > 50) ? "C" : "Fail"
//     );

//     return 0;
// }

// Looping statements
// #include<stdio.h>
// int main(){
//     int n=10,i;
//     i=1;
//     while(i<=n){
//         printf("i=%d\n",i);
//         i++;

//     }        
   
//     return 0;
// 

// #include<stdio.h>
// int main(){
//     int rows;
//     printf("enter no. of rows : ");
//     scanf("%d",&rows);
//     for(int i=0;i<rows;i++) {
//         for(int j=0;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<3;i++)
//     {
//         printf("Shoolini\n");
//         for(int j =1;j<3;j++){
//             printf("Btech cse\n");
//         }
//     }
//     return 0;

// } 

// WAP to print the reverse of no. 123 -> 321
// #include<stdio.h>

// int main() {
//     int n = 123;
//     int temp = n;
//     int rev = 0, rem;

//     while(n != 0) {  
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n = n / 10;
//     }

//    printf("Reversed no. : %d\n", rev);

//     return 0;
// }

// WAP to check the no. is pallindrome or not?
// #include<stdio.h>

// int main() {
//     int n = 121;
//     int temp = n;
//     int rev = 0, rem;

//     while(n != 0) {  
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n = n / 10;
//     }

//    printf("Reversed no. : %d\n", rev);

//    if (rev == temp){
//     printf("it is pallidrome");
//    } else {
//     printf("it is not pallidrome");
//    }
//     return 0;
// }

// WAP to check the no. is Armstrong number
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n = 1634;
//     int temp = n;
//     int digit = 0, rem = 0, res = 0;

//     // Step 1: Count digits
//     while (temp != 0) {
//         temp = temp / 10;
//         digit++;
//     }

//     temp = n; // Reset temp to original number

//     // Step 2: Calculate Armstrong sum
//     while (temp != 0) {
//         rem = temp % 10;
//         res += pow(rem, digit);
//         temp = temp / 10;
//     }

//     // Step 3: Compare with original number
//     if (res == n) {
//         printf("It is an Armstrong number\n");
//     } else {
//         printf("It is not an Armstrong number\n");
//     }

//     return 0;
// }
// WAP to print no. of digit in a no.
// #include<stdio.h>
// int main(){
//     int n = 12344567;
//     int i = 0;
//     while(n != 0){
//         n = n/10;
//         i++;
//     }
//     printf("no of digit : %d ", i);

//     return 0;
// }

// WAP to print first and last digit
// #include<stdio.h>

// int main() {
//     int i, firstDigit, lastDigit;

    
//     printf("Enter a number: ");
//     scanf("%d", &i);

//     lastDigit = i % 10;  


//     firstDigit = i;
//     while (firstDigit >= 10) {
//         firstDigit = firstDigit / 10;
//     }

//     printf("First digit: %d\n", firstDigit);
//     printf("Last digit: %d\n", lastDigit);

//     return 0;
// }

// // WAP to swap first and last digit 
// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int n, first, last, temp, pow = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     temp = n;         
//     last = n % 10;    


//     while (n >= 10) {
//         n = n / 10;
//         pow = pow * 10;
//     }
//     first = n;      

    
//     int swapped = (temp % pow) / 10;      
//     swapped = last * pow + swapped * 10 + first;

//     printf("Number after swapping first and last digits: %d\n", swapped);

//     return 0;
// }

// #include <stdio.h>

// void swap(int *a, int *b) {
//     printf("Before swapping a %d and b %d\n", *a, *b);
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("After swapping a %d and b %d\n", *a, *b);
// }

// int main() {
//     int x, y;
//     printf("Enter the values: ");
//     scanf("%d %d", &x, &y);
//     printf("Before swapping x %d and y %d\n", x, y);
//     swap(&x, &y);
//     printf("After swapping x %d and y %d\n", x, y);
//     return 0;
// }

// // WAP to print no. in reverse order

// #include <stdio.h>

// // Function to reverse a number
// int reverseNumber(int num) {
//     int reversed = 0;
//     while (num != 0) {
//         int digit = num % 10;
//         reversed = reversed * 10 + digit;
//         num /= 10;
//     }
//     return reversed;
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int result = reverseNumber(num);
//     printf("Reversed number: %d\n", result);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int size, i;

//     printf("Enter the size of array: ");
//     scanf("%d", &size);

//     int a[size]; // ✅ Now 'size' is defined

//     printf("Enter the elements of array: ");
//     for(i = 0; i < size; i++) {
//         scanf("%d", &a[i]);
//     }

//     printf("Array elements multiplied by 2: ");
//     for(i = 0; i < size; i++) {
//         printf("%d\t", a[i] * 2);
//     }

//     return 0;
// }

//                     WAP to print the max and min elements from Array list and also second max and second min
// #include <stdio.h>

// int main() {
//     int n, i;
//     system("cls");
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0], min = arr[0],secmax,secmin;
//     for (i = 1; i < n; i++) {
//         if (arr[i] > max)
//         { 
//             secmax = max;
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
            
//             min = arr[i];
//             secmin = min;
//         }
//     }

//     printf("Maximum element = %d\n", max);
//     printf("Minimum element = %d\n", min);
//     printf("second Maximum elementt = %d\n", secmax);
//     printf("second Minimum elementt = %d\n", secmin);


//     return 0;
// }

// WAP to second element in array list 
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     if (n >= 2) {
//         printf("Second element = %d\n", arr[1]);
//     } else {
//         printf("Array has less than 2 elements!\n");
//     }

//     return 0;
// }
// WAP to extract an array in asc / desc order.
// WAP to count the array elment
// WAP to print the duplicate value
// 

// WAP to print first_last_digit
// #include <stdio.h>

// int main(void) {
//     int n = 12345;
//     int temp = n;

//     // Last digit
//     printf("last number is: %d\n", temp % 10);

//     // First digit
//     while (temp > 9) {
//         temp /= 10;
//     }
//     printf("first number is: %d\n", temp);

//     return 0;
// }

// // WAP to print your name and dept 

// #include <stdio.h>

// int main() {
//     char name[50];   
//     char dept[50];   

//     printf("Enter your name: ");
//     fgets(name, 50, stdin);

//     printf("Enter your department: ");
//     fgets(dept, 50, stdin);

//     printf("Name: %s", name);
//     printf("Department: %s", dept);

//     return 0;
// }

// WAP to count no. of alphabet in strings

// #include <stdio.h>

// int main() {
//     char name[50];   
//     char dept[50];
//     int i, counter=0;  

//     printf("Enter your name: ");
//     fgets(name, 50 , stdin);

//     printf("Enter your department: ");
//     fgets(dept, 50, stdin);

//     printf("Name: %s", name);
//     printf("Department: %s", dept);

//     for(i=0;name[i]!='\0';i++){
//         counter++;
//     }

//     printf("no. of alphabet : %d",counter-1);

//     return 0;
// }

// WAP to count the no. of vowels and consonants from a strings
#include <stdio.h>
#include <string.h>
#include <ctype.h>   // for isalpha() and tolower()

int main() {
    char name[50];   
    char dept[50];   
    int i, vowels = 0, consonants = 0;  

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';   // remove newline

    printf("Enter your department: ");
    fgets(dept, sizeof(dept), stdin);
    dept[strcspn(dept, "\n")] = '\0';   // remove newline

    printf("\nName: %s\n", name);
    printf("Department: %s\n", dept);

    // Count vowels and consonants in name
    for(i = 0; name[i] != '\0'; i++) {
        char ch = tolower(name[i]);   // case-insensitive
        if(isalpha(ch)) {             // only alphabets
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("No. of vowels in name: %d\n", vowels);
    printf("No. of consonants in name: %d\n", consonants);

    return 0;
}