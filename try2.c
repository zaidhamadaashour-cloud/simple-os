#include <stdio.h>

long long int number = 0;
long int total = 0;
long int counter = 0;

void GUI(void)
{
    printf("WELCOME IN EL SHAHEEN OS\n");
    printf("===============================\n");
    printf("chose application:-\n");
    printf("1- counter grade\n");
    printf("2- counter number\n");
    printf("3- exit\n");
    printf("Enter your choice: ");
    scanf("%lld", &number);
}

int main(void)
{
    GUI();

    if (number==1)
    {
        while (counter != -200)
        {
            printf("enter -200 to exit\n");
            printf("enter your grade number: ");
            scanf("%ld", &counter);
            if (counter != -200)
            {
                total += counter;
                printf("total is: %ld\n", total);
            }
        }
    }
    else if (number==2)
    {  
        while (counter != -200)
        {
            printf("enter -200 to exit\n");
            printf("enter your counter number: ");
            scanf("%ld", &counter);
        }
    }
    else if (number==3)
    {
        printf("you chose exit\n");
    }

GUI(); 
   return 0;
}