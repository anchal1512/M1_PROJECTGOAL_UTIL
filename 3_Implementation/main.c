#include "calculator.h"


int main(){
    int X=1;
    int n;
    scanf("%d",&n);
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    // Function call 
    calculator_operations();

    while(X)
    {
        printf("\n");
        
        scanf("%d",&n);
        switch(n)
        {
            case 1 : addition(a, b);
                      break;

            case 2 : subtraction(a,b);
                      break;

            case 3 : multiplication(a,b);
                      break;

            case 4 : division(a, b);
                      break;

            case 5 : modulus(a,b);
                      break;

            case 6 : factorial(a);
                      break;

            case 7: power(a,b);
                      break;

          
            case 8: calculator_operations();
                      break;

            case 9 : exit(0);
                      break;
        
            case 10:
                      system("cls");
                      calculator_operations();
                      break;

            default : system("cls");

    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      calculator_operations();
        }
        /* Initiate the Unity Test Framework */
    
    }
    

}
