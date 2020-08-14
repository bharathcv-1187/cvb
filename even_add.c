#include<stdio.h>
int main()
{
int i,even=0,odd=1;
int num[10];
printf("enter the number...\n");
for(i=0;i<10;i++)
scanf("%d",&num[i]);
printf("the entered number is...\n");
for(i=0;i<10;i++)
printf("%d  ",num[i]);
for(i=0;i<10;i++)
{
     if(num[i]%2==0)
           even+=num[i];
      else
           odd*=num[i];

}
printf("the even=%d odd=%d\n",even,odd);
}
