
#include "calculator.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"

#define KEY "Enter the your choice with the calculator:"

int main()
{
    int X=1;
    char Calc_oprn;

    // Function call 
    CalculatorOperations();

    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': Add();
                      break;

            case '-': Sub();
                      break;

            case '*': Mul();
                      break;

            case '/': Div();
                      break;

            case '?': Mod();
                      break;

            case '!': Fact();
                      break;

            case '^': Pow();
                      break;

            case 'H':
            case 'h': CalculatorOperations();
                      break;

            case 'Q': exit(0);
                      break;
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      CalculatorOperations();
                      break;

            default : system("cls");

    printf("\nYou have entered invalid option");
    printf("***********\n");
    printf("\n*****Please Enter from one of below available option thank you ");
    printf("options****\n");
                      CalculatorOperations();
        }
    }
}
