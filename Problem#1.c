#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*integer keyboard array with max:50 memory address */
    int keyboard[50];
    unsigned int i, k, n;
    
    printf("Enter 1 to n-number of times not greater than 50 times, to press the keyboard:");
    scanf("\n%u", &n); /*gets value from keybaord*/
    if(n>50)/* 1 <=n <= 50 */
    {
        printf("Sorry we can't handle more than 50, try again with lower");
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            printf("\nEnter Key(s): ");
            scanf("%d", &keyboard[i]);
        }
        for(i=1; i<=n; i++)
        {
            /* get int values from keybaord and store in k* if*/
            /* if cases are met print case*/
            k = keyboard[i];
            switch(k)
            {
                case 1:
                    printf("%d (A) ", n);
                    break;
                case 2:
                    printf("%d (Ctrl-A) ", n);
                    break;
                case 3:
                    printf("%d (Ctrl-C) ", n);
                    break;
                case 4:
                    printf("%d (Ctrl-V) ", n);
                    break;
                default:
                    printf("Error! input from keyboard");
            }
        }
    }
    return 0;
}