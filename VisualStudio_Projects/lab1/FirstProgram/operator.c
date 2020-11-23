#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*long mathpower(int n, int p) {
    int i;
    int sum = 1;

    for (i = 0; i < p; i++) {

        sum = sum * n;
        printf("n ^ %d = " i);
        printf("%ld", sum);
    }
    
    return sum; 

}
*/

int main()
{
    printf("Please enter your number n: ");
    int num, resultDouble, resultSquare;
    scanf("%d", &num);
    resultDouble = num * 2;
    resultSquare = num * num; 
    int n, p;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a number: ");

    printf("Enter a power: ");
    scanf("%d", &p);
   // printf(mathpower());




    printf("The number entered by user is: %d", resultDouble);
    printf("The square of the number is: %d", resultSquare);

    return 0; 

}