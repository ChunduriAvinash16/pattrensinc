
#include<stdio.h>
#include<conio.h>
/*
  1   1
   2 2
    3
   4 4
  5   5

    */
int main()
{
   int i,j,n;
   clrscr();
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
	(i==j || i+j==n-1)?printf("%d",i+1):printf(" ");
	printf("\n");
   }
   getch();
   return 0;
}