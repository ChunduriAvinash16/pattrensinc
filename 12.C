#include<stdio.h>
#include<conio.h>
/*
    1
   222
  33333
 4444444
*/
int main()
{
   int i,j,px,py,n;
   clrscr();
   scanf("%d",&n);
   px=n;
   py=n;
   for (i=1;i<=n;i++)
   {
     for(j=1;j<=(n*2)-1;j++)
     (j>=px && j<=py)?printf("%d",i):printf(" ");
     px--;
     py++;
     printf("\n");
   }
   getch();
   return 0;
}