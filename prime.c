#include<stdio.h>
int main()
{
    int a[10],i,j,c=0;
    printf("hi this bharath...\n");
    printf("entered the array elements..\n");
     for(i=0;i<10;i++)
     {
       scanf("%d",&a[i]);
     }
for(i=0;i<10;i++)
 {
        for(j=2;j<a[i];j++)
        {
             if(a[i]%j==0)
               break;
        }
if(a[i]==j)
 {
    printf("%d ",a[i]);
 }
}
}
                 
