/*Problem Statement:

Implement ticket price calculator program for a drama theater. The program should determine the ticket price based on the age of the visitor, applying appropriate discounts for children and seniors.

Instructions:

Prompt the user to enter their age.
Based on the age provided, calculate the ticket price using the following rules:
Children under 5 years old can enter for free.
Children aged 5 to 12 receive a 50% discount on the regular ticket price.
Seniors aged 65 and above receive a 20% discount on the regular ticket price.
For all other age groups, the regular ticket price applies.
Display the calculated ticket price to the user.
Sample Executions:

Scenario: Child Under 5 Years Old

Input: Age = 3
Output:
Children under 5 years old get in free!
Ticket price: Rs. 0.00
Scenario: Child Aged 8

Input: Age = 8
Output: Ticket price: Rs. 50.00
Scenario: Senior Aged 70

Input: Age = 70
Output: Ticket price: Rs. 80.00
Scenario: Adult Aged 25

Input: Age = 25
Output: Ticket price: Rs. 100.00*/
#include<stdio.h>
int main()
{
    int age;
    float Ticket_price = 100;
    scanf("%d",&age);
    
    if(age<=5)
    {
        printf("Children under 5 years old get in free!\n");
        printf("Ticket price: Rs 0.00");
    }
    else if (age>=5&&age<=12)
    {
        float Ticket_price1 = Ticket_price*50/100;
        printf("Ticket price: Rs. %0.2f",Ticket_price1);
    }
    else if (age>=65)
    {
        float Ticket_price2 = Ticket_price*80/100;
        printf("Ticket price: Rs. %0.2f",Ticket_price2);
    }
    else
    {
        printf("Ticket price: Rs. %0.2f",Ticket_price);
    }
    
    return 0;
}