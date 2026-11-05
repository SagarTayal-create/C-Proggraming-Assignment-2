#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the 3rd number : ");
    scanf("%d",&c);

    if ((a<b && b<c)||(b>c && a>b))
    {
        printf("Middle value = %d",b);
    }
    else if ((b<c && c<a)||(c>a && b>c))
    {
        printf("Middle value = %d",c);
    }
    else if ((c<a && a<b)||(a>b && c>a))
    {
        printf("Middle value = %d",a);
    }
  return 0;
}