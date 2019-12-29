#include<stdio.h>
#include<conio.h>
/*
   1
  2 2
 3   3
  2 2
   1
 */
int main()
{
 int n,i,j;
 int px,py;
 clrscr();
 scanf("%d",&n);
 px=n-1;
 py=n-1;
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n*2-1;j++)
   {
	(j==px || j==py)?printf("%d",i+1):printf(" ");
   }
   px--;
   py++;
   printf("\n");
  }
 px=0;
 py=n*2-2;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n*2-1;j++)
   {
	(j==px || j==py)?printf("%d",n-i):printf(" ");
   }
   px++;
   py--;
   printf("\n");
  }
  getch();
  return 0;
 }