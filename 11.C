#include<stdio.h>
#include<conio.h>
/*
   *
  ***
 *****
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
     {
	if(j>=px && j<=py)
	{
	  printf("*");
	}
	else
	{
	  printf(" ");
	}

     }
     px--;
     py++;

     printf("\n");
   }
   getch();
   return 0;
}