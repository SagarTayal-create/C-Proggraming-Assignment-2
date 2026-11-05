#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter angle a : ");
    scanf("%d",&a);
    printf("Enter angle b : ");
    scanf("%d",&b);
    printf("Enter angle c : ");
    scanf("%d",&c);

    if (a+b+c!=180 || a<=0 || b<=0 || c<=0)
    {
        printf("Invalid");
    }
    else if (a<90 && b<90 && c<90)
    {
        printf("Acute");
    }
    else if (a==90 && b<90 && c<90|| b==90 && a<90 && c<90|| c==90 && a<90 && b<90)
    {
        printf("Right");
    }
    else 
    {
        printf("obtuse");
    }
    return 0;
    
}