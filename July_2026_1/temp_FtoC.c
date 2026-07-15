/*Write a program that takes a temperature in Fahrenheit as input and converts it to Celsius using the formula: 

celsius = (fahrenheit - 32) * 5/9

Note : Comment the prompting messages 

like printf("enter the number ");*/
#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    //printf("Enter the temperetaure in Fahrenheit: \n");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32)*5/9;
    printf("%f",celsius);
    return 0;
}