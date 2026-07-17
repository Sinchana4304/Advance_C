/*Problem Statement:
WAP to Print direction based on input char (N/S/E/W/n/s/e/w)

Sample Execution 1:

Enter direction: N
North
Sample Execution 2:

Enter direction: W
West
Sample Execution 3:
Enter direction: X
Invalid input*/
#include<stdio.h>
int main()
{
    char dir;
    printf("Enter direction: \n");
    scanf("%c",&dir);
    
    switch(dir)
    {
     case 'N':
     case 'n':
      printf("North");
      break;
     case 'S':
     case 's':
      printf("South");
      break;
     case 'E':
     case 'e':
      printf("East");
      break; 
     case 'W':
     case 'w':
      printf("West");
      break; 
     default:
      printf("Invalid input");
      break; 
    }
    return 0;
}