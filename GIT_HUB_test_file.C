#include<stdio.h>
void main()
{
 int a[100],i,r,n,temp;
 clrscr();
 printf("\nenter arry size\n");
 scanf("%d",&n);
 printf("enter elements of array\n");
 for(i=1;i<=n;i++)
 scanf("%d",&a[i]);

 i=1;
 r=n/2;
 while(i<=r)
 {
  temp=a[i];
  a[i]=a[n-i+1];
  a[n-i+1]=temp;
  i++;
 }
 printf("modified array\n");
 for(i=1;i<=n;i++)
 printf("%d\n",a[i]);

 getch();
 }
