#include<stdio.h>
int main()
{
    int a[5],i,j,ele,temp;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the array elements...\n");
    for(i=0;i<ele;i++)
       scanf("%d",&a[i]);
    printf("the entered elements is...\n");
    for(i=0;i<ele;i++)
    printf("%d ",a[i]);
     printf("\n");
    for(i=1;i<ele;i++)
     {
        j=i;
          while(j!=0 && a[j]<a[j-1]) 
              {
               temp=a[j];
               a[j]=a[j-1];
               a[j-1]=temp;
               j--;
              }
           
     }
printf("the sorted array...\n");
 for(i=0;i<ele;i++)
  printf("%d ",a[i]);
  printf("\n");
}

 
