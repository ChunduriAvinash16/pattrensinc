#include<stdio.h>
#include<conio.h>
/*
A   A
 B B
  C
 D D
E   E
  */
int main()
{
   int j,n,i;
   clrscr();
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
	(i==j || i+j==n-1)?printf("%c",65+i):printf(" ");
	printf("\n");
   }
   getch();
   return 0;
}