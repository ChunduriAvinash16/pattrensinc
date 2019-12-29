#include<stdio.h>
#include<conio.h>
int main()
{
 int n,i,j,px,py;
 clrscr();
 scanf("%d",&n);
 px=n-1;
 py=n-1;
 for(i=0;i<n*2+1;i++)
  {
   for(j=0;j<=n*2+1;j++)
    {
     (i<=n)?((j==px || j==py)?printf("*"):printf(" ")):((j==px || j==py)?printf("*"):printf(" "));
    }
     if(i<n)
     {
       px--;
       py++;
      }
      else
      {
       ++px;
       py--;
      }
       printf("\n");
    }
   getch();
   return 0;
  }
