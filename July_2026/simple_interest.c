/*Write a C program to calculate the simple interest for a given principal amount, rate of interest, and time period.

Instructions:
Prompt the user to enter the principal amount, rate of interest, and time period in years.
Calculate the simple interest using the formula: Simple Interest = (Principal Amount * Rate of Interest * Time) / 100.*/
#include<stdio.h>
int main()
{
    float Simple_Interest, P, R;
    int T;
    printf("Enter the Principal Amount: \n");
    scanf("%f",&P);
    printf("Enter the Rate of Interest: \n");
    scanf("%f",&R);
    printf("Enter the Time Period: \n");
    scanf("%d",&T);
    Simple_Interest = (P*R*T)/100;
    printf("Simple Interest = %g\n", Simple_Interest);
    return 0;
}