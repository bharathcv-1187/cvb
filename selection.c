#include<stdio.h>
int main()
{
  int a[5],i,j,ele;
  ele=sizeof(a)/sizeof(a[0]);
  printf("entere the array elements...\n");
  for(i=0;i<ele;i++)
  scanf("%d",&a[i]);
  printf("without sorting...\n");
  for(i=0;i<ele;i++)
  printf("%d ",a[i]);
  for(i=0;i<ele-1;i++)
  {
     for(j=i+1;j<ele;j++)
      {
        int temp;
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
  }
printf("the after sorting...\n");
 for(i=0;i<ele;i++)
 {
    printf("%d ",a[i]);
 }
}
