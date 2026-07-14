/*WAP to find sum of 2 integers.
Program should read two integers from user and print the sum.

Sample executions :
Input    : 7 1
Output : sum=8*/
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Input : \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    return 0;
}