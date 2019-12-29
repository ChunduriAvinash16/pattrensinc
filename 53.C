#include<stdio.h>
#include<conio.h>
/*
5   1
 4 2
  3
 4 2
5   1

 */
int main()
{
   int i,j,n;
   clrscr();
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
	(i==j || i+j==n-1)?printf("%d",n-j):printf(" ");
	printf("\n");
   }
   getch();
   return 0;
}