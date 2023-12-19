#include<stdio.h>
int main()
{
    char lower, upper;
    printf("enter any lowercase letter : ");
    scanf("%c", &lower);

    upper = toupper(lower); //using toupper library funcion

    printf("Uppercase letter : %c", upper);
}

