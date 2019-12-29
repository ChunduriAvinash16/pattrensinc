#include<stdio.h>
#include<conio.h>
/*
    1
   123
  12345
 1234567
   */
int main()
{
   int i,j,px,py,n,k;
   clrscr();
   scanf("%d",&n);
   px=n;
   py=n;
   for (i=1;i<=n;i++)
   {
   k=1;
     for(j=1;j<=(n*2)-1;j++)
     {
	if(j>=px && j<=py)
	{
	  printf("%d",k++);
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