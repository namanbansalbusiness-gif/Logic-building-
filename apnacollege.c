// #include<stdio.h>
// int main(){
//     printf("hello world");
//     return 0;
// }   

//functions and recursions

// #include<stdio.h>

// // declaration/prototype
// void printHello();
// void printGoodbye();

// int main(){
//     printHello();//function cell
//     printGoodbye();

//     return 0;
// }

// //function defination
// void printHello() {
//     printf("Hello!\n");
// }

// void printGoodbye(){
//     printf("Good bye!\n");
// }

// Write a function that prints Namaste if user is Indian and Bonjour if the user is french

// #include<stdio.h>

// void namaste();
// void bonjour();

// int main(){
//     printf("enter f for french and i for indian : ");
//     char ch;
//     scanf("%c",&ch);

//     if (ch == 'f'){
//         bonjour();
//     }else if (ch == 'i') {
//         namaste();
//     }else {
//         printf("fuck off");
//     }
//     return 0;
// }

// void namaste(){
//     printf("Namaste");
// }

// void bonjour(){
//     printf("Bonjour");
// }

// #include<stdio.h>

// int sum(int a, int b);

// int main(){
//     int a,b;
//     printf("enter a : ");
//     scanf("%d",&a);
//     printf("enter b : ");
//     scanf("%d",&b);

//     int s = sum(a,b);
//     printf("sum is %d ",s);

//     return 0;
// }

// int sum(int a,int b){
//     return a+b;
// }

// #include <stdlib.h> // Optional, for system()

// int sum(int a, int b); // Declared but unused
// void printtable(int n);

// int main() {
//     int n;
//     system("cls"); // Corrected
//     printf("Enter no.: ");
//     scanf("%d", &n);

//     printtable(n); // actual parameter

//     return 0;
// }

// int sum(int a, int b) {
//     return a + b;
// }

// void printtable(int n) { // formal parameter
//     for (int i = 1; i <= 10; i++) {
//         printf("%d\n", i * n);
//     }
// }

// #include<stdio.h>

// void calculateprice(float value);

// int main(){
//     float value;
//     printf("Enter value: ");
//     scanf("%f", &value);

//     calculateprice(value);
    
//     return 0;
// }

// void calculateprice(float value){
//     value = value + (0.18 * value);
//     printf("Final price with 18%% tax: %.2f\n", value);
// }

// Write functions to calculate area of a square , a circle and a rectangle

// #include <stdio.h>
// #define PI 3.14

// // Function to calculate area of square
// float squarearea(float side) {
//     return side * side;
// }

// // Function to calculate area of circle
// float circlearea(float rad) {
//     return PI * rad * rad;
// }

// // Function to calculate area of rectangle
// float rectanglearea(float a, float b) {
//     return a * b;
// }

// int main() {
//     float side, rad, a, b;

//     // Input and output for square
//     printf("Enter side of square: ");
//     scanf("%f", &side);
//     if (side < 0) {
//         printf("Invalid input: side cannot be negative.\n");
//     } else {
//         printf("Area of square is: %f\n", squarearea(side));
//     }

//     // Input and output for circle
//     printf("Enter radius of circle: ");
//     scanf("%f", &rad);
//     if (rad < 0) {
//         printf("Invalid input: radius cannot be negative.\n");
//     } else {
//         printf("Area of circle is: %f\n", circlearea(rad));
//     }

//     // Input and output for rectangle
//     printf("Enter length (a): ");
//     scanf("%f", &a);
//     printf("Enter width (b): ");
//     scanf("%f", &b);
//     if (a < 0 || b < 0) {
//         printf("Invalid input: dimensions cannot be negative.\n");
//     } else {
//         printf("Area of rectangle is: %f\n", rectanglearea(a, b));
//     }

//     return 0;
// }

// //                                                        recursive function
// #include<stdio.h>

// void printHW(int count);

// int main(){
//     printHW(10);
//     return 0;
// }

// void printHW(int count){
//     if (count == 0){
//         return;
//     }
//     printf("Hello World\n");
//     printHW(count-1);
// }

// // Sum of first n natural numbers
// #include<stdio.h>

// int sum(int n);

// int main(){
//     printf("sum is : %d", sum(5));

//     return 0;
// }
// //                                                         recursive function
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1); //sum of 1 to n
//     int sumN = sumNm1 + n;
//     return sumN;
// }    

// // Factorial of n.
// #include<stdio.h>

// int fact(int n);

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Factorial of %d is %d\n", num, fact(num));
//     return 0;
// }

// int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * fact(n - 1);
// }

// // Write a function to convert celsius to farhrenheit
// #include<stdio.h>

// float converttemp(float celsius);

// int main(){
//     float cel;
//     printf("enter temp in celsius : ");
//     scanf("%f",&cel);

//     printf("temp in far is : %f",converttemp(cel) );
//     return 0;
// }

// float converttemp(float celsius){
//     int far = (celsius * (9.0/5.0)) + 32;
//     return far;
// }

//pointers
// #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr; 

//     printf("%d", _age);

//     return 0;
// }

//  #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
   
//     //address
//     //printf("%p\n", &age);
//     printf("%u\n", &age);

//     printf("%u\n", ptr);
//     printf("%u", &ptr);
//     return 0;
// }

//  #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
   
//     //value
//     printf("%d\n", age);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int *ptr;
// int x;

// ptr = &x;
// *ptr = 0;

// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);

// *ptr += 5;
// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);

// (*ptr)++;
// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i = 100.00;
//     int *ptr = &i;
//     int **pptr = &ptr;

//     printf("%d\n", **pptr);

//     return 0;
// }

// #include <stdio.h>

// void square(int n);
// void _square(int* n);

// int main() {
//     int number = 4;

//     square(number);           // Call by value
//     printf("number = %d\n", number);

//     _square(&number);         // Call by reference (pass address)
//     printf("number = %d\n", number);

//     return 0;
// }

// // Call by value
// void square(int n) {
//     n = n * n;
//     printf("square = %d\n", n);
// }

// // Call by reference
// void _square(int *n) {
//     *n = (*n) * (*n);
//     printf("square = %d\n", *n);
// }

//////Swap two no,'s a,b :---

// #include <stdio.h>

// void swap(int a , int b);
// void _swap(int *a , int *b);

// int main() {
//     int x = 3, y = 5;

//     swap(x, y);           // Call by value
//     printf("x = %d & y = %d\n", x, y);

//     _swap(&x, &y);        // Call by reference
//     printf("x = %d & y = %d\n", x, y);

//     return 0;
// }

// // Call by value
// void swap(int a , int b) {
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d & b = %d\n", a, b);
// }

// // Call by reference
// void _swap(int *a , int *b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
//     printf("*a = %d & *b = %d\n", *a, *b);
// }


///////            ARRAYS
// #include<stdio.h>
// int main() {

// int marks[3];
// printf("enter phy : ");
// scanf("%d", &marks[0]);

// printf("enter chem : ");
// scanf("%d", &marks[1]);

// printf("enter math : ");
// scanf("%d", &marks[2]);

// printf("phy = %d, chem = %d, math = %d", marks[0],marks[1],marks[2]);
// return 0;
// }


//     WAP to enter price of 3 items & print their final cost with gst
// #include <stdio.h>
// int main(){
//     float price[3];
//     printf("enter 3 prices : ");
//     scanf("%f", &price[0]);
//     scanf("%f", &price[1]);
//     scanf("%f", &price[2]);

//     printf("total price 1 : %f\n", price[0]+(0.18*price[0]));
//     printf("total price 2 : %f\n", price[1]+(0.18*price[1]));
//     printf("total price 3 : %f\n", price[2]+(0.18*price[2]));
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("ptr = %u",ptr);
//     // ptr--;
//     ptr ++;
//     printf("ptr = %u", ptr);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int age = 22;
//     int _age = 23;
//     int *ptr = &age;
//     int *_ptr = &_age;

//     printf("diiference = %u\n", ptr-_ptr);
//     _ptr = &age;
//     printf("comparison = %u\n", ptr - _ptr );

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int aadhar[5];  
//     // input
//     int *ptr = &aadhar[0];
//     for(int i = 0; i < 5; i++) {
//         printf("%d index : ", i);
//         scanf("%d", (ptr + i));
//     }

//     // output
//     for(int i = 0; i < 5; i++) {
//         printf("%d index = %d\n", i, aadhar[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// void numbers(int arr[], int n);

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     numbers(arr, 6);
//     return 0;
// }

// void numbers(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }

///                Multidimentional arrays
// #include <stdio.h>
// int main(){
//     // 2 X 3
//     int marks[2][3]; //_ _ _ | _ _ _
//     marks [0][0] = 90;
//     marks [0][1] = 89;
//     marks [0][2] = 79;

//     marks [1][0] = 99;
//     marks [1][1] = 98;
//     marks [1][2] = 97;

//     printf("%d", marks [0][1]);
//     return 0;
// }


// WAP to count the no. of odd no.'s in an array
// #include <stdio.h>

// int countODD(int arr[], int n);

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printf("%d", countODD(arr, 6));
//     return 0;
// }

// int countODD(int arr[], int n ){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] % 2 != 0) { //ODDṇ
//             count++;
//         }
//     }
    
//     return count;
// }


/////     WAP to reverse an array 
// #include <stdio.h>

// void reverseArray(int arr[], int size) {
//     int start = 0, end = size - 1, temp;
//     while (start < end) {
//         // Swap elements
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[100], n;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     reverseArray(arr, n);

//     printf("Reversed array:\n");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }


// #include <stdio.h>
// int main(){
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, first, last, digits, temp;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     last = num % 10;

//     // Extract first digit
//     first = num;
//     while (first >= 10) {
//         first = first / 10;
//     }

//     // Count total digits
//     digits = (int)log10(num);

//     // Remove first and last digits to get the middle part
//     int middle = num % (int)pow(10, digits); // remove first digit
//     middle = middle / 10; // remove last digit

//     // Reconstruct the number with swapped digits
//     temp = last * (int)pow(10, digits) + middle * 10 + first;

//     printf("Number after swapping: %d\n", temp);

//     return 0;
// }e 


//                                  Strings 

//  WAP to create a string firstName & LastName to store details of user & print all the characters using a loop
// #include <stdio.h>

// void printString(char arr[]);

// int main() {
//     char FirstName[] = "Naman";
//     char LastName[] = "Bansal";

//     printf("First Name: ");
//     printString(FirstName);

//     printf("Last Name: ");
//     printString(LastName);

//     return 0;
// }

// void printString(char arr[]) {
//     for (int i = 0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// #include <stdio.h>
// int main(){
//     char *canChange = "Hello world";
//     puts(canChange);
//     canChange = "Hello";
//     puts(canChange);
//     return 0;
// }

// WAP that inputs user's name and prints its length
// #include <stdio.h>
// #include <string.h>  // for strlen()

// int main() {
//     char name[100];   // buffer to store name

//     printf("Enter your name: ");
//     fgets(name, sizeof(name), stdin);  // safer than gets()

//     // Remove newline character if present
//     name[strcspn(name, "\n")] = '\0';

//     int length = strlen(name);  // string length function

//     printf("Length of your name is: %d\n", length);

//     return 0;
// }

//                               Standard library functions

// // To count number of character excluding '\o'
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char name[] = "Naman";
//     printf("length is : %d" , strlen(name));
//     return 0;
// }

// // Copies value of old string to new string 
// #include<stdio.h>
// #include<string.h>

// int main (){
//     char oldStr[] = "oldStr";
//     char newStr[] = "newStr";
//     strcpy(newStr,oldStr);
//     puts(newStr);
//     return 0;
// }

// // Add (concatenates) first string with second
// #include<stdio.h>
// #include<string.h>

// int main(){
//     system("cls");

//     char firstStr[] = "Hello";
//     char LastStr[] = "world";

//     strcat(firstStr,LastStr);
//     puts(firstStr);
//     return 0;
// }

// // Compares 2 strings & returns a value
// #include<stdio.h>
// #include<string.h>

// int main(){
//     system("cls");

//     char firstStr[] = "Apple";
//     char LastStr[] = "Banana";

//     printf("%d",strcmp(firstStr,LastStr));
    
//     return 0;
// }

// WAP take a string input from the user using %c.
//  #include<stdio.h>
//  #include<string.h>

//  int main(){
//     system("cls");
//     char str[100];
//     char ch;
//     int i = 0;

//     while(ch != '\n'){
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     } 
//     str[i] = '\0';
//     puts(str);
//     return 0;
//  }

// // Salting
// WAP to find the salted form of a password entered by user if the salt is "123" & added at the end.
// #include<stdio.h>
// #include<string.h>

// void salting(char password[]);

// int main(){
//     system("cls");
//     char password[100];
//     scanf("%s", password);
//     salting(password);
//     return 0;
// }

// void salting(char password[]){
//     char salt[] = "123";
//     char newPass[200];

//     strcpy(newPass, password);
//     strcat(newPass, salt);
//     puts(newPass);
// }

// WAP  a function named slice , which takes a string & returns a sliced string from index n to m
// #include <stdio.h>
// #include <string.h>

// void slice(char str[], int n, int m);

// int main() {
//     system("cls");
//     char str[] = "HelloWorld";
//     slice(str, 3, 6);  // slice from index 3 to 6
//     return 0;
// }

// void slice(char str[], int n, int m) {
//     char newStr[100];
//     int j = 0;

//     for (int i = n; i <= m; i++) {
//         newStr[j] = str[i];
//         j++;
//     }

//     newStr[j] = '\0';  // terminate string
//     puts(newStr);
// }

// #include<stdio.h>
// #include<string.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main() {
//     struct student s1;
//     s1.roll = 1929;
//     s1.cgpa = 9.0;  // or 9.2, etc.
//     strcpy(s1.name, "Naman");

//     printf("student name = %s\n", s1.name);
//     printf("student roll no = %d\n", s1.roll);
//     printf("student cgpa = %.2f\n", s1.cgpa); // prints with 2 decimal places

//     return 0;
// }
