#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i,k,j,px,py;
  clrscr();
  scanf("%d",&n);
  px=n-1;
  py=n-1;
  for(i=0;i<n;i++)
   {
   k=65;
    for(j=0;j<n*2-1;j++)
     {
      if(j>=px && j<=py)
       {
	(j<=n-1)?printf("%c",k++):printf("%c",--k-1);
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
