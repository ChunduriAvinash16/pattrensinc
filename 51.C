#include<stdio.h>
#include<conio.h>
int main()
/*
 5   5
  4 4
   3
  2 2
 1   1
 */
{
   int i,j,n;
   clrscr();
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
	(i==j || i+j==n-1)?printf("%d",n-i):printf(" ");
	printf("\n");
   }
   getch();
   return 0;
}