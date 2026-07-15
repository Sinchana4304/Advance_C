/*You have to read a characer and check it is  upper case, lower case, digit or none.of.above.

Sample Execution : 

Test case 1 : 

Enter the character : A

The character is Upper Case.

Test case 2 :


Enter the character : 5

The character is Digit.

Test case 3 :

Enter the character : !

The character not an alphabet or digit.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: \n");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("The character is Upper Case\n");
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("The character is Lower Case\n");
    }
    else if(ch>='0'&& ch<='9')
    {
        printf("The character is Digit\n");
    }
    else
    {
        printf("The character not an alphabet or digit\n");
    }
    return 0;
}