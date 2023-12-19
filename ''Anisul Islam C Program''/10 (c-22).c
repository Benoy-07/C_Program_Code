#include<stdio.h>
int main()
{
    char lower, upper;
    printf("enter any uppercase letter : ");
    scanf("%c", &upper);

    lower = tolower(upper); //using tolower library funcion

    printf("Lowercase letter : %c", lower);
}


