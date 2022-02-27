#include "calculator.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"
void CalculatorOperations()
{

    printf("\n");

    printf("Come Lets Calculate together And Have fun \n");

    printf("******* Press 'Q' or 'q' to quit \n ");
    printf("***** Press 'H' or 'h' to display ");

    printf("Enter 'C'/'c' to clear the screen");

    printf("Enter +  for Addition \n");
    printf("Enter - for Subtraction \n");
    printf("Enter * for Multiplication \n");
    printf("Enter / for Division \n");
    printf("Enter ? for Modulus\n");
    printf("Enter ^ for Power \n");
    printf("Enter ! for Factorial \t");

}

void Add()
{
    int N, total_SUM=0, M=0, NUMBER;
    printf("\n");
    printf("ENTER YOUR TOTAL NUMBER OF CHOICE TO ADD:");
    scanf("%d",&N);
    printf(" Enter %d NUMBER BY ONE BY ONE: \n",N);
    while(M<N)
    { 
        scanf("%d",&NUMBER);
        total_SUM=total_SUM+NUMBER;
        M=M+1;
    }
    printf("Sum of total %d is = %d \n",N,total_SUM);
}

void Sub()
{ 
    int p, q, r = 0; 
    printf("\n Enter you choice of first number  : "); 
    scanf("%d", &p); 
    printf("Enter you choice of  second number : "); 
    scanf("%d", &q); 
    r = p - q; 
    printf("\n subtraction of %d - %d is = %d\n", p, q, r); 
}

void Mul()
{
    int p, q, multi=0; 
    printf("\n Enter you choice of  first number  : "); 
    scanf("%d", &p); 
    printf(" Enter you choice of  second number: "); 
    scanf("%d", &q);
    multi=p*q;
    printf("\nMultiplication of choosed numbers are = %d\n",multi);
}

void Div()
{
    int p, q, div=0; 
    printf("\n Enter your choice of first number  : "); 
    scanf("%d", &p); 
    printf(" Enter your choice of second number : "); 
    scanf("%d", &q);
    div=p/q;
    printf("\nDivision of your choosed numbers are=%d\n",div);
}

void Mod()
{
    int p, q, mod=0; 
    printf("\n Enter your choice of first number   : "); 
    scanf("%d", &p); 
    printf(" Enter your choice of second number  : "); 
    scanf("%d", &q);
    mod=p%q;
    printf("\nModulus of entered numbers = %d\n",mod);
}

void Pow()
{
    double c,number, pow1;
    printf("\nEnter the choice of your two numbers  \n");
    printf("number: ");
    scanf("%lf",&c);

    printf("power : ");
    scanf("%lf",&number);

    pow1=pow(c,number);

    printf("\n%lf to the power of %lf = %lf \n",c,number,pow1);
}

int Fact()
{
    int fact=1,number;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&number);

    if (number<0)
    {
        printf("\n Enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }               

    for(int i=1;i<=number;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of your choice number %d is:%d\n",number,fact);
    return 0;
}

