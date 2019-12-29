#include<stdio.h>
#include<conio.h>
/*
 1   5
  2 4
   3
  2 4
 1   5*/
int main()
{
   int i,j,n;
   clrscr();
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
	(i==j || i+j==n-1)?printf("%d",j+1):printf(" ");
	printf("\n");
   }
   getch();
   return 0;
}