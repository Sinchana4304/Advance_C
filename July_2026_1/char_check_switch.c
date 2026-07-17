/*WAP to check whether character is Upper case, Lower case, Digit, or None of the above

Using Switch Case Range (...)

Instructions:

Prompt the user to enter a character.
Check whether the character is :
Upper case: A-Z
Lower case: a-z
Digit: 0-9
None of the above
Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Program execution sample:

Sample Output 1:
Enter a character: A
Character is Uppercase
Sample Output 2:
Enter a character: d
Character is Lowercase
Sample Output 3:
Enter a character: 5
Character is a digit
Sample Output 4:
Enter a character: &
Not an alphabet or digit
Sample Output 5:
Enter a character: z
Character is Lowercase*/
#include<stdio.h>
int main()
{
    char valid_char;
    int char_matched = 0;
    printf("Enter a character: \n");
    scanf("%c",&valid_char);
    
    switch(valid_char>='A'&&valid_char<='Z')
    {
        case 1:
         printf("Character is Uppercase\n");
         char_matched = 1;
         break;
         
    }
    switch(valid_char>='a'&&valid_char<='z')
    {
        case 1:
         printf("Character is Lowercase\n");
         char_matched = 1;
         break;
         
    }
    switch(valid_char>='0'&&valid_char<='9')
    {
        case 1:
         printf("Character is a digit\n");
         char_matched = 1;
         break;
         
    }
    switch(char_matched)
    {
        case 0:
           printf("Not an alphabet or digit\n");
           break;
    }
    return 0;
}