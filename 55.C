#include<stdio.h>
#include<conio.h>
/*
A   E
 B D
  C
 B D
A   E
*/

int main()
{
   int j,n,i;
   clrscr();
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
	(i==j || i+j==n-1)?printf("%c",65+j):printf(" ");
	printf("\n");
   }
   getch();
   return 0;
}