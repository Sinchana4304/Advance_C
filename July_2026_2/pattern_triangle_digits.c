/*WAP to Print Simple Triangle Digits Pattern

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");



Program execution sample:

Sample Output 1:
Enter max lines: 4

1
12
123
1234*/
#include<stdio.h>
int main()
{
    int n;
    //printf("Enter the number: \n");
     printf("Enter max lines: \n"); 
     scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

 return 0;
    
}