#include<stdio.h>
int main()
{   
    int p,a,b; //p=pin,a=amount,b=balance
    printf("Enter your PIN : ");
    scanf("%d",&p);

   if (p==1234)
   {
    printf("Enter amount : ");
    scanf("%d",&a);
    if(a%100==0)
    {
        if(a>0)
        {  
            printf("Enter Balance : ");
            scanf("%d",&b); 
            if(a<=b)
            {
                printf("WIthdrawal Successful");
            }
            else
            {
                printf("Insufficient balance");
            }
        }
        else
        {
            printf("Invalid Amount");
        }
    }
    else
    {
            printf("Invalid Amount");
    }
   } 
   else
   {
    printf("Invalid PIN");
   }
    return 0;
}