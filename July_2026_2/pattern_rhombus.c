/*You have to print the below pattern

Sample Execution : 

Test case 1 : 

Enter n value: 3

           *

        * * *

     * * * * * 

       * * *

         *

*/
#include<stdio.h>
int main()
{
    int n;
   // printf("Enter n value: \n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
       for(int space = 1;space<=(n-i);space++)
       {
        printf(" ");
       }
       for(int star = 1;star<=(2*i)-1;star++)
       {
       printf("*");
       }
       printf("\n");
    }
    
    for(int i = 1;i<=(n-1);i++)
    {
        for(int space = 1;space<=i;space++ )
        {
    printf(" ");
        }
        for(int star = 1;star<(2*(n-i));star++)
    {
        printf("*");
    }
    printf("\n");
    }
    return 0;
}