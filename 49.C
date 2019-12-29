#include<stdio.h>
#include<conio.h>
/*
 *   *
  * *
   *
  * *
 *   *
 */
int main()
{
   int i,j,n;
   clrscr();
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
	(i==j || i+j==n-1)?printf("*"):printf(" ");
	printf("\n");
   }
   getch();
   return 0;
}