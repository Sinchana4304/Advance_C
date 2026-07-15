/*WAP to Find average of 3 float values
Program should read 3 float values from user and print their average.

Sample executions :
Test case 1:
Input : 25.7 1.1 28.2
Output : 18.333333*/
#include<stdio.h>
int main()
{
    float a,b,c,sum;
    int n=3;
    float avg;
    printf("Input: \n");
    scanf("%f%f%f",&a,&b,&c);
    sum = a+b+c;
    avg = sum/n;
    printf("%f\n",avg);
    return 0;
}