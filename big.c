#include<stdio.h>
int main()
{
int i,lar,slar;
int a[10];
printf("bharath kumar cv\n");
printf("ener the numbers...\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("the entere number is...\n");
for(i=0;i<10;i++)
printf("%d ",a[i]);
lar=a[0];
slar=a[1];
for(i=1;i<10;i++)
{
     if(a[i]>lar)
        {
          slar=lar;
          lar=a[i];
      }
    else if(a[i]>slar)
          slar=a[i];
          
}
############################################
printf("my name is bharath kumar cv came from karnatak shikaripura....\n");
printf("git clone......\n");
printf("einfochips an arrow company.....\n");
printf("attitude is everything....\n");
printf("the largest number is...%d, second large=%d\n",lar,slar);
}
