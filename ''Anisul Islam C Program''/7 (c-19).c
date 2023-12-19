#include<stdio.h>
int main()
{
    char lower;
    printf("enter any lowercase letter : ");
    scanf("%c", &lower);

    printf("The uppercase letter : %c", lower-32);
}
