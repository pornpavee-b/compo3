#include<stdio.h>
int main()

{
    int number1;
    int number2;
    printf("Enter a number :");
    scanf("%d",&number1);
    printf("Enter a number :");
    scanf("%d",&number2);

    if(number1!=4 && number2==4)
    {
        printf("Does not match.Try again");
    }
    else
    {
        printf("Match");
    }

    return (0);

}