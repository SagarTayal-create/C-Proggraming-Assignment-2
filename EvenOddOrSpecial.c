#include<stdio.h>
int main()
{
    int x;
    printf("Enter the integer n : ");
    scanf("%d",&x);
    if (x%2==0 && x%5==0)
    {
        //If n is divisible by both 2 and 5, print Special.
        printf("Special");
    }
    else if(x%2==0)
    {   
        //If it is divisible only by 2, print Even
        printf("Even");
    }
    else if(x%5==0)
    {   
        //If it is divisible only by 5, print Five.
        printf("five");
    }
    else
    {   
        //Otherwise, print Odd/Other.  
        printf("Odd/Other");
    }
  return 0;
}