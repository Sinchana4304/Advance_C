#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);

switch(ch)
{
        case 'A':
                printf("You have entered %c and is vowel\n",ch);
                break;
        case 'a':
                   printf("You have entered %c and is vowel\n",ch);
                   break;
        case 'E':
                   printf("You have entered %c and is vowel\n",ch);
                   break;
        case 'e':
                   printf("You have entered %c and is vowel\n",ch);
                   break;
        case 'I':
                   printf("You have entered %c and is vowel\n",ch);
                  break;
        case 'i':
                   printf("You have entered %c and is vowel\n",ch);
                   break;
        case 'o':
                   printf("You have entered %c and is vowel\n",ch);
                    break;

        case 'O':
                  printf("You have entered %c and is vowel\n",ch);
                   break;
        case 'U':
                   printf("You have entered %c and is vowel\n",ch);
                   break;
        case 'u':
                   printf("You have entered %c and is vowel\n",ch);
                   break;
        default:
          printf("You have entered %c and is not a  vowel\n",ch);
                    break;
}
return 0;
}

/*#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    // Fixed: Added the & before ch to prevent a crash
    scanf("%c", &ch);

    switch(ch)
    {
        // Lowercase and uppercase vowels stacked together
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("You have entered '%c' and it is a vowel\n", ch);
            break;

        default:
            printf("You have entered '%c' and it is not a vowel\n", ch);
            break;
    }*/