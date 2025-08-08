#include<stdio.h>

int main()
{

    int hight;
    int radius;
    float pi=3.14;

    printf("Enter cone high:");
    scanf("%d",&hight);
    printf("Enter cone base redius:");
    scanf("%d",&radius);
    float volume=(pi*radius*radius*hight)/3;
    printf("%f Cone volume =",volume);
    
    if(volume>260)
    {
        printf("This cone is perfect for Supun project");
    }
    else
    {
        printf("This cone is not fit for this project");
    }

    return(0);
}