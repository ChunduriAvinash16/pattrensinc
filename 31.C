#include<stdio.h>
#include<conio.h>
int main()
{
 int n,k,i,j,px,py;
 clrscr();
 scanf("%d",&n);
 px=py=n-1;
 for(i=0;i<n;i++)
  {
  k=65;
   for(j=0;j<n*2-1;j++)
    {
     if(j>=px && j<=py)
      {
       printf("%c",k);
       k++;
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