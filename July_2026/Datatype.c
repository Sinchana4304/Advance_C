#include<stdio.h>
int main()
{
    int n;
    char c;
    float f;
    double d;
    printf("Enter the Number: \n");
    scanf("%d", &n);
    printf("Enter the Character: \n");
    scanf(" %c", &c);
    printf("Enter the  Float: \n");
    scanf("%f", &f);
    printf("Enter the Double: \n");
    scanf("%lf", &d);
    return 0;
}