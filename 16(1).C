#include<stdio.h>
#include<conio.h>
int main()
{
 int n,i,j;
 int px,py;
 clrscr();
 scanf("%d",&n);
 px=py=n-1;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n*2-1;j++)
   {
	(j==px || j==py)?printf("%d",i+1):printf(" ");
   }
   px--;
   py++;
   printf("\n");
  }
  getch();
  return 0;
 }
