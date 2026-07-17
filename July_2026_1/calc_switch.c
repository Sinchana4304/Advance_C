/*Problem Statement:

Design a simple calculator program that takes two numbers and an arithmetic operation as input from the user and performs the corresponding calculation. The arithmetic operation should be entered as a character (+ for addition, - for subtraction, * for multiplication, / for division). Use a switch case statement to handle different operations.

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");



Sample Execution 1:

Enter number1, operator and number2: 10 * 7

Output: 70



Sample Execution 2:

Enter number1, operator and number2: 20 + 5

Output: 25



Sample Execution 3:

Enter number1 operator and number2: 12 $ 6

Invalid operation!*/
#include<stdio.h>
int main()
{
    int a,b;
    char op;
    int add,sub,mul,div;
    
    scanf("%d %c%d",&a,&op,&b);
   
    
    switch(op)
    {
        case '+':
           add = a+b;
           printf(" %d\n",add);
           break;
        case '-':
           sub = a-b;
           printf(" %d\n",sub);
           break;
        case '*':
           mul = a*b;
           printf(" %d\n",mul);
           break;
        case '/':
            div = a/b;
           printf(" %d\n",div);
           break;
        default:
        printf("Invalid operation!\n");
        break;
    }
    return 0;
}