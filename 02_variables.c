#include <stdio.h>
/*
This is our first c program
which is awesome!
*/
int main()
{
    int a = 4; //4 is an integer value
    // int b = 8.5; // Not recommended because 8.5 is not an integer
    float b = 8.5;
    char c = 'u';
    int d = 45;
    int e = 45 + 4;
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("Sum of a and d is %d \n", a + d);
    printf("Sum of a and d is %d \n", e);
    return 0;
}

// Try it Yourself --> Create a program to add two numbers in C

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,sum;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("sum of two numbers is %d",sum);
    
    return 0;
}