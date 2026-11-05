#include<stdio.h>
int main()
{   
    int W;
    printf("Enter the number : ");
    scanf("%d",&W);
    switch (W)
    {
        case 1:
        {
            printf("Monday-Working Day");
            break;
        }
        case 2:
        {
            printf("Tuesday-Working Day");
            break;
        }
        case 3:
        {
            printf("Wednesday-Working Day");
            break;
        }
        case 4:
        {
            printf("Thursday-Working Day");
            break;
        }
        case 5:
        {
            printf("Friday-Working Day");
            break;
        }
        case 6:
        {
            printf("Saturday-Weekend");
            break;
        }
        case 7:
        {
            printf("Sunday-Weekend");
            break;
        }

        default:
        printf("Invalid day");
    }
  return 0;
}