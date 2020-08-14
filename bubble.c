#include<stdio.h>
int main()
{
  int a[5],i,j;
printf("entere the array elements..\n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("withuot sorting...\n");
for(i=0;i<5;i++)
{
    printf("%d ",a[i]);
}
printf("\n");
for(i=0;i<5-1;i++)
{
   for(j=0;j<5-1-i;j++)
   {
      if(a[j]>a[j+1])
      {
        int temp;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
   }
}
printf("with sorting...\n");
for(i=0;i<5;i++)
printf("%d ",a[i]);
}
