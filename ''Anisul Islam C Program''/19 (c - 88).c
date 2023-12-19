#include<stdio.h>
int main()
{
    int choice;
    float temp, convertedTemp;

    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to celsious\n");
    printf("2. Celcious to Fahrenheit\n");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter the fahrenheit temperature :");
            scanf("%f", &temp);

            convertedTemp = (temp-32)/1.8;
            printf("The temperature in celsius is : %f\n", convertedTemp);
            break;
        }
        case 2:
        {
            printf("Enter the celsius temperature :");
            scanf("%f", &temp);

            convertedTemp = (1.8*temp)+32;
            printf("The temperature in fahrenheit is : %f\n", convertedTemp);
            break;
        }
        default:
            printf("Not a correct option");
    }
}
