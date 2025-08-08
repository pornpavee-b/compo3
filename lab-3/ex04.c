#include<stdio.h>

int main()
{
  int cal;
  char name[20];
  int phy;
  int sci;
  
  printf("Enter your name:");
  scanf("%s",name);
  printf("Enter your Calculus score:");
  scanf("%d",&cal);
  printf("Enter your Physic score:");
  scanf("%d",&phy);
  printf("enter your Science score:");
  scanf("%d",&sci);
  
  float everage=(cal+phy+sci)/3.0;

  if(everage>=80)
  {
    printf("%syour everage is%.2f.You got grade A.",name,everage);

  }
  else if (everage>=70 && everage<80)
  {
    printf("%s your everage is%.2f.You got grade B.",name,everage);

  }
  else if(everage>=60 && everage<70)
  {
    printf("%s your everage is%.2f.You got grade C.",name,everage);

  }
  else if(everage>=50 && everage<60)
  {
    printf("%s your everage is%.2f.You got grade D.",name,everage);

  }
  else
  {
    printf("%s your everage is%.2f.you got grade F.",name,everage);
  }

  return (0);


}