/*You have to read 2 integers from user and multiply two numbers without using multiplication operator

Sample Execution : 

Test case 1 : 

Enter the two numbers : 10 2

The Result is 20

Test case 2 :


Enter the two numbers : 1 2

The Result is 2

*/
#include<stdio.h>
int main()
{
    int a, b;
    
    printf("Enter the two number: \n");
    scanf("%d%d",&a,&b);
    int mul = 0;
    
    for(int i=1;i<=b;i++)
    {
        mul = mul +a;
    }
    printf("The result is %d\n",mul);
    return 0;
    
}