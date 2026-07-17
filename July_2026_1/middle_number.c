/*Description : 

you should read three intergers from user and find the middle number 

Sample Execution : 

Test case 1 : 

Enter the Three numbers : 10 20 30

The middle number is 20

Test case 2 :


Enter the Three numbers : 43 10 25

The middle number is 25

*/
#include<stdio.h>
int main()
{
    int a,b,c,mid;
    printf("Enter the theree numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(b>a)
    {
        if(b<c)
        {
            mid = b;      
            }
            else if(a>c)
            {
                mid = a;
            }
            else
            {
                mid = c;
            }
    }
    
    else
    
    {
        if(b>c)
        {
            mid = b;
        }
        else if(a>c)
        {
            mid = c;
        }
        else
        {
            mid = a ;
        }
    }
   
    
    printf("The middle number is %d\n",mid);
    return 0;
}