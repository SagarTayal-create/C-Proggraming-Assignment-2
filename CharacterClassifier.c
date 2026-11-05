#include<stdio.h>
int main()
{   
    
    char ch;
    printf("Enter a character : ");
    scanf(" %c",&ch);
    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("Vowel");
    }
    else if (ch=='0' || ch=='1' || ch=='2' || ch=='3' || ch=='4' || ch=='5' || ch=='6'|| ch=='7' || ch=='8' || ch=='9')
    {
        printf("Digit");
    }
    else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf("Consonant");
    }
    else
    {
        printf("Special Character otherwise");
    }

    return 0;
}