
#include "calculator.h"
//#include "stdio.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"

#define KEY "Enter the calculator Operation you want to do:"

int main()
{
    int X=1;
    char Calc_oprn;

    // Function call 
    calculator_operations();

    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '?': modulus();
                      break;

            case '!': factorial();
                      break;

            case '^': power();
                      break;

            case 'H':
            case 'h': calculator_operations();
                      break;

            case 'Q': exit(0);
                      break;
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;

            default : system("cls");

    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      calculator_operations();
        }
    }
}
