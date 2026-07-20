#include<stdio.h>
int main()
{
    int num;
   // printf("Enter a number: \n");
    scanf("%d",&num);
    int rev = 0;
    int rem;
    if(num<0)
    {
        printf("Please enter a positive integer\n");
    }
    else
    {
        while(num!=0)
        {
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    printf("Reversed number is %d\n",rev);
    }
    return 0;
}