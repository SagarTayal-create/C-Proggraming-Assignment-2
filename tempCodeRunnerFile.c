#include<stdio.h>
int main()
{
    // m=marks,a=attendance
    int m;
    int a; 
    printf("Enter Marks : ");
    scanf("%d",&m);
    printf("Enter Attendance : ");
    scanf("%d",&a);

    if (m>=75 && a>=75)
    {
        printf("Eligible");
    }
    else if (m>=90 && a>=70)
    {
        printf("Special Scholarship");
    }
    
    else
    {
        printf("Not Eligible");
    }
    return 0;
}