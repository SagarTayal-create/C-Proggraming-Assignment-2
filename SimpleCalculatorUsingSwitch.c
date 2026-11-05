#include<stdio.h>
int main()
{
   int x;
   printf("Enter first number : ");
   scanf("%d",&x);
   char op;
   printf("Enter operator : ");
   scanf(" %c",&op);
   int y;
   printf("Eter second number : ");
   scanf("%d",&y);

   switch(op)
   {
        case '+':
        
            printf("Result = %d",x+y);
            break;
        
        case '-':
            
            printf("Result = %d",x-y);
            break;

        case '*':

            printf("Result = %d",x*y);
            break;
        
        case '/':
         if(y==0)
         {
            printf("cannot divide by zero");
         }
         else
         {
            printf("Result = %d",x/y);
         }
        break;

        case '%':
         if(y==0)
         {
            printf("cannot divide vy zewo");
         }
        else
         {
            printf("Result  = %d",x%y);
         }
        break;
      
      default:
        printf("invalid operators");

     }
  return 0;
}