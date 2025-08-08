#include<stdio.h>
int main()


{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num==2)
    {
        printf("%d number is even",num);
    
    }
    else 
    {
        printf("%d numberis out of range",num);
    }
    
    return(0);
}