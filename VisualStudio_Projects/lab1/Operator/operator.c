/***********************************************************************************************************
Program: operator.c
Course: SOL1 WS2020
Authors: Adelina Jasko, Igor Kojanin
Date: 18.11.2020

(a) This program reads an integer number from the keyboard
    input and saves this into a variable called n. Then output double the
    number (2n) and the square (n2) of this number to the console:
(b) The program asks user for input of a number and a power and then logs the expressions and results

************************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

long mathpower(int n,int p) // recieved input is used in this function 
{
    int i;
    long sum = 1;

    for (i = 1; i <= p; i++) { // run the loop to calculate each power for the number before we reach the one given by user

        sum = sum * n; // To calculate the power we need to multiple the number by itself given amount of times

        printf("\n%d ^ %d = %ld", n, i, sum); // each line shows the expression with the numbers used 

    }

    return sum;

}

int main()
{
  
    int n, p; // initializing variables n for number and p for power
    long num; // the variable that will be a placeholder for the return of the function

    printf("Enter a number: ");  // Ask user to input number
    scanf("%d", &n);             //Recieve the value, assign to var n
    printf("\nEnter a power: "); // Ask user to input the power
    scanf("%d", &p);             //Recieve the value, assign to var p

    printf("2 * %d = %d", n, n * 2); // Logging the (a) part of assigment into the console
    num=mathpower(n,p);

    return 0;

}

int calculateWithInt() { // this is a seperate function for the (a) part of the assigment


    //int n;  replaced with "long n"
    long n; 

    //int resultDouble, resultSquare; replaced with "long resultDouble, resultSquare"
    long resultDouble, resultSquare;

    printf("Please enter your number n: ");
    scanf("%d", &n);
    resultDouble = n * 2;
    resultSquare = n * n;

    //printf("\nThe number entered by user is: %ld", resultDouble);
    //printf("\nThe square of the number is: %ld", resultSquare);

    return 0;

}